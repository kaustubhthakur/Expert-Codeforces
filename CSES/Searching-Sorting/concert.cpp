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
 cin>>n>>m;
 set<ar<int,2>>s;
  rep(i,0,n)
  {
    int a;
    cin>>a;
    s.insert({a,i});
  }
  rep(i,0,m)
  {
    int t;
    cin>>t;
    auto it = s.lower_bound({t+1,0});
    if(it ==s.begin())
   { cout<<-1<<endl;
  }else 
    {
        --it;
        cout<<(*it)[0]<<endl;
        s.erase(it);
    }

  }


 
}
int main()
{
    solve();
}