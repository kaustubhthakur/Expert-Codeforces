#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9 + 7;
const int N =1005;
int a[N];
long long binPow(long long a, long long n)
{
    if (n == 0)
    {
        return 1;
    }
    long long res = binPow(a, n / 2);
    if (n % 2)
    {
        return (res * res * a) % mod;
    }
    else
    {
        return (res * res) % mod;
    }
}
int Extendedgcd(int a, int b, int x, int y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int dx, dy;
    int d = Extendedgcd(b, a % b, dx, dy);
    x = dy;
    y = dx - dy * (a / b);
    return d;
}

void solve()
{
    ll n, k;
    cin >> k >> n;
    for (int i = 1; i <= n * k; ++i)
    {
        cin >> a[i];
    }
    ll x = (k + 1) / 2 - 1;
    x = k - x;
    ll z = n * k + 1;
    ll ans = 0;
    while (n--)
    {
        z -= x;
        if (z <= 0)
            break;
        ans += a[z];
    }
    cout << ans << endl;
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