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
int phi(int n)
{
    int res = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                res -= res / i;
            }
        }
    }
    if (n > 1)
    {
        res -= res / n;
    }
    return res;
}
const int N = 200010;
int p[N];
void solve()
{
int n;
cin>>n;
int maxi = INT_MIN;
vector<int>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
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