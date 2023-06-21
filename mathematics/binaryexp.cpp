#include <bits/stdc++.h>
using namespace std;
long long binexp(long long a,long long b)
{
    if(b==0)
    {
        return 1;
    }
    long long res = binexp(a,b/2);
    if(b%2)
    {
        return res*res*a;
    }
    else 
    {
        return res*res;
    }
}
int main()
{
int a,n;
cin>>a>>n;
cout<<binexp(a,n);
}