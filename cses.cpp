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
vector<int>a;
for(int i=0;i<n;++i)
{
  int v;
  cin>>v;
  int p = upper_bound(a.begin(),a.end(),v)-a.begin();
  if(p<a.size())
  {
    a[p]=v;
  }
  else 
  {
    a.push_back(v);
  }
}
cout<<a.size()<<endl;
}
int main()
{
    solve();
}