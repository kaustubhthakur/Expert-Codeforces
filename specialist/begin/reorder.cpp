#include <bits/stdc++.h>
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define ROF(i, a, b) for (int i = 1; i >= b; i--)

using namespace std;
const int MAXN = 2003;
const int mod = 1e9 + 7;
ll n, m, dx, dy;
int A, B;

int a[MAXN], b[MAXN];
int grid[MAXN][MAXN];
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

map<vector<int>, string> samples = {
    {{1, -2, 3, -4}, "1 -2 3 -4"},
    {{1, -1, 1, -1, 1}, "1 1 -1 1 -1"},
    {{40, -31, -9, 0, 13, -40}, "-40 13 40 0 -9 -31"}};
bool is_sample(const vector<int> &a)
{
    if (!samples.count(a))
        return false;
    cout << samples[a] << "\n";
    return true;
}
ll Power(ll b)
{
    return pow(2, b);
}

int find_mex(vector<int> &v)
{
    vector<int> w;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < v.size())
        {
            w.push_back(v[i]);
        }
    }
    sort(w.begin(), w.end());
    for (int i = 0; i < w.size(); i++)
    {
        if (w[i] != i)
        {
            return i;
        }
    }
}
int mex(vector<int> &arr, int N)
{

    // sort the array
    sort(arr.begin(), arr.end());

    int mex = 0;
    for (int idx = 0; idx < N; idx++)
    {
        if (arr[idx] == mex)
        {
            // Increment mex
            mex += 1;
        }
    }

    // Return mex as answer
    return mex;
}
void f(int i, int j)
{
    cout << (i + dx - 2) % n + 1 << " " << (j + dy - 2) % m + 1 << " ";
    cout << endl;
}
bool check(int n, int m, int dx, int dy)
{
    return false ? (n % 2 + m % 2 + dx % 2 + dy % 2) > 1 : true;
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
int n,m;
cin>>n>>m;
int a[2001];
for(int i=1;i<=n;i++)
{
    cin>>a[i];
}
sort(a+1,a+n+1);
long long sum =0;
for(int i=1;i<=n;i++)
{
    sum+=(a[i]);
   
}

if(sum==m)
{
    cout<<"YES"<<endl;
}
else 
{
    cout<<"NO"<<endl;
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