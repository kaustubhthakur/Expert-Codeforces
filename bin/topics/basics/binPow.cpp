#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
long long binPow(long long a,long long n)
{
    if(n==0)
    {
        return 1;
    }
    long long res = binPow(a,n/2);
    if(n%2)
    {
        return (res*res*a)%mod;
    }
    else 
    {
        return (res*res)%mod;
    }
}
int main()
{
    long long a,n;
    cin>>a>>n;
    cout<<binPow(a,n)<<endl;

    return 0;
}