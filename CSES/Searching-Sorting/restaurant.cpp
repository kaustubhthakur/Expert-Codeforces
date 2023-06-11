#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int s[n],f[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i]>>f[i];
    } 

    long long i=0,j;
vector<bool> present ;
long long  cnt=1;
for(j=1;j<n;j++)
{
if(s[j]>=f[i])
{
   
    cnt++;

    
}
}
cout<<cnt<<endl;
    return 0;
}