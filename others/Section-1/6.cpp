#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, i, s = 0, y, ans = 0;
        cin >> n >> x;
        for (i = 0; i < n && cin >> y; i++)
        {
            s += y;
            ans += y / x + (y % x != 0);
        }
        cout << (s / x + (s % x != 0)) << " " << ans << "\n";
    }
    return 0;
}
