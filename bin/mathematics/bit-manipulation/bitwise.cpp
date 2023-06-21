#include <bits/stdc++.h>
using namespace std;
long long sets(int n,int x)
{
    return (n|(1<<x));
}
int main()
{
int n;
cin>>n;
if(n%2==1)
{
    cout<<2<<endl;
}
else 
{
    cout<<1<<endl;
}
return 0;
}