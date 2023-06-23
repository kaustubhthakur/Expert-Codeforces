#include <bits/stdc++.h>
using namespace std;
#define ll long long;
#define ar array;
const int maxN = 2e5;
const int mod = 1e9 + 7;
int ans[maxN];

long long solve(long long a, long long b,long long m)
{
   long long res= 1;
   while(b)
   {
    if(b&1)
    {
        res = res*a%mod;
    }
    a = a*a%mod;
    b = b/2;
   }
return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long ans = solve(a,b,mod);
        
        cout << ans<<endl;
    }
    return 0;
}