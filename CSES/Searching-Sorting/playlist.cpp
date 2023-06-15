#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define ar array
using namespace std;
const int maxN = 2e5;
int a[maxN];
int  fact(int n)
{
    return n*fact(n-1);
}
void solve()
{
 
int n;
cin>>n;
int ans =0;
map<int,int>mp;

for(int i=0;i<n;++i)
{
  cin>>a[i];
}


for(int i=0,j=0;i<n;++i)
{
while(j<n && mp[a[j]]<1)
{
  mp[a[j]]++;
  ++j;
}
ans = max(j-i,ans);
mp[a[i]]--;
}
cout<<ans<<endl;
}
int main()
{
    solve();
}