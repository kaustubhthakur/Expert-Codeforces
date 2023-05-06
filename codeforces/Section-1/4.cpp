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
    for (int i = 0; i <= n; i++)
    {
        int cnt = 0;
        for (auto it : a)
        {
            if (!(i >= it))
            {
                cnt++;
            }
           
        }
         if (cnt == i)
            {
                cout << i <<endl;
                return;
            }
            
    }

    cout << "-1" << endl;
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