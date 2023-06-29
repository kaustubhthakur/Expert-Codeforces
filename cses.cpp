#include <bits/stdc++.h>
using namespace std;
#define ll long long;
#define ar array;
const int maxN = 2e5;
const int mod = 1e9 + 7;
int ans[maxN];

void solve()
{
   int n;
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   int ans=0;
   for(int i=0;i<n;i++)
   {
    
    if(a[i]>a[i+1] )
    {
        swap(a[i],a[i+1]);
        ans++;
    }

   }
  
    cout<<ans<<endl;
   
}
int main()
{
    solve();
    return 0;
}