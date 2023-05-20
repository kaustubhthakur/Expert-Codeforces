#include <bits/stdc++.h>
using namespace std;
const int N = 1003;
int a[N];
void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<int> b(n);
   int i=0;
   for(int j=1;j<=n;j++)
   {
    b.push_back(a[i]-a[j]);
   }
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += b[i];
    }

    if (n % 2 == 0)
    {
        if (sum % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (n % 2 == 1)
    {
        if (sum % 2 == 1)
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