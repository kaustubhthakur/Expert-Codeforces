#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N =10003;
int a[N];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,k;
      cin>>n>>k;
      ll sum=0;
      vector<ll>a(n),pre(n),post(n);
      for(int i=0;i<n;i++)
      {
      cin>>a[i];
sum+=a[i];
      }
      sort(a.begin(),a.end());
 
      pre[0]=a[0];
      post[n-1]=a[n-1];
      for(int i=1;i<n;i++)
      {
        pre[i]=pre[i-1]+a[i];
      }
      for(int i=n-2;i>=0;i--)
      {
        post[i]=post[i+1]+a[i];
      }
      ll ans =0;
      for(int i=1;i<k;i++)
      {
        ans = max(ans,sum-(pre[2*i-1]+post[n-(k-i)]));
      }
      ans = max(ans,sum-post[n-k]);
      ans = max(ans,sum-pre[2*k-1]);
      cout<<ans<<endl;
    }
    return 0;
}