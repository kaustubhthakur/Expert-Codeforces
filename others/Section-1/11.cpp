#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(b.begin(), b.end(),greater<>());

    long long ans = 1;
    for (int i = 0; i < n; i++)
    {
        int cnt = a.size() - (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
        ans = ans * max(cnt - i, 0) % MOD;
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