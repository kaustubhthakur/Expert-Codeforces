#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       


        int cnt=0;
      for(int i=1;i<=n;i++)
      {
        int x;
        cin>>x;
        cnt=__gcd(cnt,abs(x-i));
      }
cout<<cnt<<endl;
    }
    return 0;
}