#include <bits/stdc++.h>
using namespace std;
const int N = 10000003;
int a[N];
void solve()
{
    long long n;
    cin>>n;
    for(int i=1;i<=n;++i)
    cin>>a[i];

    sort(a+1,a+n+1);
    int res = a[1];
    for(int i=1;i<=n-1;i++)
    {
        res  = max(res,a[i+1]-a[i]);
    }
    cout<<res<<endl;

   

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        solve();




    }
    return 0;
}