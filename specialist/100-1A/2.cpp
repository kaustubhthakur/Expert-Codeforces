#include <bits/stdc++.h>
#define ll long long;
#define rep(i,a,b) for(int i=a;i<b;i++);
#define nl '\n'
using namespace std;
void solve()
{
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a.begin(),a.end());
int i=0,j=n-1;
int ans=0;
while(j>=i)
{
    ans+=(a[j--]-a[i++]);
}
cout<<ans<<endl;
}
int main()
{
int t;
cin>>t;
while(t--)
{
solve();
}
}