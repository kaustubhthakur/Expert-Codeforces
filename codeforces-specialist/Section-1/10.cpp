#include <bits/stdc++.h>
using namespace std;
const int N = 200001;
int a[N];
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    
    }
    int cnt = -1;
    int ans = -1;
    for (int i = n; i >= 1; i--)
    {
        if (a[i] > ans)
       { ans = a[i];
        cnt++;}
    }
    cout << cnt << endl;
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