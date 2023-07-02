#include <bits/stdc++.h>
#define ll long long;
#define rof(i, a, b)              \
    for (int i = a; i > = b; i--) \
        ;
#define REF(i, a, b)             \
    for (int i = a; i <= b; i++) \
        ;
#define rep(i, a, b)            \
    for (int i = a; i < b; i++) \
        ;
#define nl cout << '\n';
#define ce cout << endl;
using namespace std;
priority_queue<int, vector<int>, greater<int>> max_heap;
const int N = 20003;
const int mod = 1e9 + 7;
int a[N];
int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}
long long binexp(long long a, long long b)
{
    if (b == 0)
    {
        return 1;
    }
    long long res = binexp(a, b / 2);
    if (b % 2)
    {
        return (res * res * a);
    }
    else
    {
        return (res * res);
    }
}
long long inv(long long a, long long b)
{
    return 1 < a ? b - inv(b % a, a) * b / a : 1;
}
long long calc(long long x, long long y, long long z)
{
    if (y >= x && z >= x)
        return min(y - x, z - x);
    if (y <= x && z <= x)
        return min(x - y, x - z);
    return 0;
}
void solve()
{
    long long xa, ya;
    cin >> xa >> ya;
    long long xb, yb;
    cin >> xb >> yb;
    long long xc, yc;
    cin >> xc >> yc;

    long long ans = calc(xa, xb, xc) + calc(ya, yb, yc);
    ans = ans+1;
    cout << ans << "\n";
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