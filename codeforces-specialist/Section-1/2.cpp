#include <bits/stdc++.h>
using namespace std;
const int N = 100003;
int a[N];
// int b[N];
void solve()
{
    long long n;
    cin >> n;

    vector<int>a(n);
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    if (a[0] % 2 == 1)
    {
        cout << "YES" << endl;
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 1)
            {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
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