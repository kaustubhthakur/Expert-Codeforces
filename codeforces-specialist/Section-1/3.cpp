#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 100003;
int a[N];
void solve()
{
    int n, k;
    cin >> n >> k;

    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a + 1, a + n + 1);
    int prefix[n + 1];
    int suffix[n + 1];
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        suffix[i] = suffix[i - 1] + a[i - 1];
    }
    for (int i = 0; i <= k; i++)
    {
        int l = prefix[2 * i];
        int r = suffix[k - i];
        maxi = max(maxi, sum - (l + r));
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