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
      for(int i=1;i<=n;i++)
      {
        for(int j=n;j>=1;j--)
        {
            if(i!=j)
            {
                a[i]--;
                a[j]++;
            }
        }
      }
      int maxi=INT_MIN,mini = INT_MAX;
      for(int i=1;i<=n;i++)
      {
        maxi = max(maxi,a[i]);
        mini = min(mini,a[i]);
      }
      cout<<maxi-mini<<endl;

    }
}