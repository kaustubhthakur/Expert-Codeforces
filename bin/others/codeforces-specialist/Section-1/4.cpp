#include <bits/stdc++.h>
using namespace std;
const int N = 10003;
int a[N];
void solve()
{
 int n,k;
 cin>>n>>k;
 int maxi =INT_MIN,sum =0;
 for(int i=1;i<=n;i++)
 {
  cin>>a[i];
 sum+=a[i];
 maxi = max(maxi,a[i]);
 }
sort(a+1,a+n+1);

long long ans =0;
for(int i=1;i<=n;i++)
{

}
cout<<sum<<endl;
  

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