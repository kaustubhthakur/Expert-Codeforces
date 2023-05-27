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
   ll n;
   cin>>n;
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