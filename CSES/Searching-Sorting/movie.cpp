#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define ar array
using namespace std;
int  fact(int n)
{
    return n*fact(n-1);
}
void solve()
{
 int n,m;
 cin>>n;
 set<ar<int,2>>s;
  rep(i,0,n)
  {
    int a,b;
    cin>>a>>b;
    s.insert({a,1});
    s.insert({2*a+1,-1});
  }
int ans =0,sol=0;
for(ar<int,2>a:s)
{
    sol+=a[1];
    ans = max(sol,ans);
}
cout<<ans<<endl;

 
}
int main()
{
    solve();
}