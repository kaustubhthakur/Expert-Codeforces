#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  bool hash[n+1];
  memset(hash,true,sizeof(hash));
  for(int i=1;i*i<n;i++)
  {
    if(hash[i]==true)
    for(int j=i*2;j<n;j+=i)
    {
        hash[i] = false;
    }
  }
  int ans =1;
  for(int i=2;i<=n;i++)
  {
    if(hash[i])
    {
        int cnt=0;
        if(n%i==0)
        {
            n = n/i;
            cnt++;
        }
        ans = ans*(cnt+1);
    }
  }
  cout<<ans<<endl;
 


    return 0;
}