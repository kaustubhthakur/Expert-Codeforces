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
vector<int>b(x);
for(int i=0;i<n;i++)
{
    cin>>b[i];
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<x;j++)
    {
        if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
        }
    }
}
cout<<"-1"<<endl;

}
int main()
{
    solve();
}