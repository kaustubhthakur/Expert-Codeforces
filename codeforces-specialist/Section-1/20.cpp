#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N =10003;
int a[N];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     for(int i=1;i<=n;i++)
     cin>>a[i];


    
     for(int i=1;i<=n;i++)
     {
    
if((a[i]+a[i+1])%2==1)
{
    swap(a[i],a[i+1]);
}
     
     }
     if(is_sorted(a+1,a+n+1))
     {
        cout<<"YES"<<endl;
     }
     else 
     {
        cout<<"No"<<endl;
     }
    }
    return 0;
}