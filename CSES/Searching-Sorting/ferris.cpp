#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
using namespace std;
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    float sum = 0;
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    int ans = 0;
    sort(a.begin(), a.end());
    for (int i = 0, j = n - 1; i < j;)
    {
        while (i < j && a[i] + a[j] > x)
            --j;
        if (i >= j)
            break;
        ++ans;
        ++i;
        --j;
    }
    cout << n - ans << endl;
}
int main()
{
    solve();
}