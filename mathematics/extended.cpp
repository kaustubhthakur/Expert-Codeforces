#include <bits/stdc++.h>
using namespace std;
int _gcd(int a,int b)
{
    return b ? (b,a%b) :a;
}
int Extended(int a,int b,int x,int y)
{
if(b==0)
{
    x = 1;
    y = 0;
    return a;
}
int dx,dy;
int d = Extended(b,a%b,dx,dy);
x = dy;
y = dx-(a/b)*dy;
return d;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b;
    cout<<Extended(a,b,c,d);
    cout<<_gcd(a,b)<<endl;
}