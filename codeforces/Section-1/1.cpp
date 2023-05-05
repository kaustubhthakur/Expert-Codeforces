#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 3;
int a[N];
void solve()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto &it:a)
    {
        cin>>it;
    }

    if (!is_sorted(a.begin(), a.end()))
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