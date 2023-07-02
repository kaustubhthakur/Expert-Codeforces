#include <bits/stdc++.h>
using namespace std ;
void solve()
{
int n,m;
cin>>n;

if(n%2==0)
{
    cout<<"NO"<<endl;
}
else 
{
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
}
int main()
{
int t;
cin>>t;
while(t--)
solve();



    return 0;
}