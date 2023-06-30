#include <bits/stdc++.h>
using namespace std;
#define ll long long;
#define ar array;
const int maxN = 2e5;
const int mod = 1e9 + 7;
int ans[maxN];
long long binexp(long long a, long long b)
{
    if (b == 0)
    {
        return 1;
    }
    long long res = binexp(a, b / 2);
    if (b % 2)
    {
        return (res * res * a);
    }
    else
    {
        return (res * res);
    }
}
void solve()
{
   int a,b,c;
   cin>>a>>b>>c;
   int ans = binexp(b,c);
   int sol = binexp(a,ans)%mod;
   
   cout<<sol<<endl;
   
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}