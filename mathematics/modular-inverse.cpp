#include <bits/stdc++.h>
using namespace std;
long long modInverse(int a,int m)
{
    for(int i=1;i<m;i++)
    {
        if(((a%m)*(i%m))%m==1)
        {
            return i;
        }
    }
}
long long inv(long long a, long long b){
 return 1<a ? b - inv(b%a,a)*b/a : 1;
}

int main()
{
int a,b,m;
cin>>a>>m;
cout<<modInverse(a,m)<<endl;
}