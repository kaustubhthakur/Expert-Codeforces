#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
    {
        cin >> it;
    }
    for (int i = 1; i < n; i++)
    {
        if ((a[i] + a[i + 1]) % 2 == 1)
        {
            swap(a[i], a[i + 1]);
        }
    }
    if (is_sorted(a.begin(), a.end()))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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