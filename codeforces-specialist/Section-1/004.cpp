#include <bits/stdc++.h>
#define ll long long
using namespace std;
float a,b;
bool good(int x)
{
    int ans=0;
for(int i=1;i<=a;i++)
{
ans = ceil(i/x);
}
return ans=1;
}
void solve()
{

  cin>>a>>b;
cout<<ceil((a-1)/b)+1<<endl;

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