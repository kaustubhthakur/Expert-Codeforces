#include <bits/stdc++.h>
#define ll long long;
#define rof(i, a, b)            \
    for (int i = a; i > =b; i--) \
        ;
#define REF(i, a, b)             \
    for (int i = a; i <= b; i++) \
        ;
#define rep(i, a, b)            \
    for (int i = a; i < b; i++) \
        ;
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
   sort(a.begin(),a.end());

 for(int i=n-1;i>=0;i--)
 {
    cout<<a[i]<<" ";
 }

   cout<<endl;
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