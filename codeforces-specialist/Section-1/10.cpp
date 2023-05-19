#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1 || a[i] % 2 == 0)
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            if (a[i] % 2 != 1 || a[i] % 2 != 0)
            {
                a[i] = a[i] - a[i - 1];
                flag = true;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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