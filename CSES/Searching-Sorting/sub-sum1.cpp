#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
using namespace std;
void solve()
{
   int n,x;
   cin>>n>>x;
   vector<int>a(n);
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   int maxi =0,l =0;
   ll cnt=0;
   int sum =0;
   for(int i=0;i<n;i++)
   {
sum +=a[i];
while(sum>x)
{
    sum-=a[l];
    l++;
}
if(sum==x)
{
    cnt++;
}
   }
   cout<<cnt<<endl;


}
int main()
{
    solve();
}