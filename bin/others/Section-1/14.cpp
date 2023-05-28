#include <bits/stdc++.h>
using namespace std;
const int N = 10003;
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
      

      int sum = 0;
      for(int i=1;i<=n;i++)
      {
        sum+=a[i];
      }
      cout<<min((sum%n),1)<<endl;

    }
}