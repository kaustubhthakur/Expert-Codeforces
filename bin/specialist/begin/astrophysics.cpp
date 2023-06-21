#include <bits/stdc++.h>
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define ROF(i, a, b) for (int i = 1; i >= b; i--)
#define fr(m) for (int i = 0; i < m; i++)
#define fro(m) for (int i = 1; i < m; i++)
#define frj(m) for (int j = 0; j < m; j++)
#define frr(n) for (int i = n; i >= 0; i--)
#define pb push_back
#define pf push_front
#define orr ||
#define nl '\n'
#define nll cout << '\n'
#define mod 1000000007
#define inf (1LL << 61)
#define inff (1 << 30)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
using namespace std;

void merging()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());

    vector<int> c(n + m);

    int i = 0, j = 0, k = 0;
    while (i < n || j < m)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    for (auto it : c)
    {
        cout << it << " ";
    }
}
bool is2Root(int x)
{
    int ans = sqrt(x);
    return ans * ans == x;
}

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

long long binExp(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long res = binExp(a, b / 2);
    if (b % 2)
    {
        return (res * res * a);
    }
    else
    {
        return (res * res);
    }
}

void solve()
{
ll n,k,g;
cin>>n>>k>>g;
int x = k*g;
long long stolen = min((g - 1) / 2 * n, k * g);
		long long rest = (k * g - stolen) % g;
 
		if (rest > 0) {
		    stolen -= (g - 1) / 2;
		    long long last = ((g - 1) / 2 + rest) % g;
 
		    if (last * 2 < g) {
		        stolen += last;
		    } else {
		        stolen -= g - last;
		    }
		}

cout<<stolen<<endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}