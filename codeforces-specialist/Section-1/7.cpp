#include <bits/stdc++.h>
using namespace std;
const int N = 10000003;
int a[N];
void solve()
{
    long long n;
    cin>>n;
    for(int i=1;i<=n;++i)
    cin>>a[i];


vector<int>b(n);

    for(long long i=1;i<n;++i)
    {
     if(a[i]>a[i+1])
     {
        continue;
     }
     if(a[i]<a[i+1])
     {
        if((a[i]+a[i+1])%2==1)
        {
            swap(a[i],a[i+1]);
        }
     } 

    }
    bool issorted= is_sorted(a+1,a+n+1);

    if(issorted && is_sorted(b.begin(),b.end())==true)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }

   

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