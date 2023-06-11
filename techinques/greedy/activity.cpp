#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int strt[n],finish[n];
    for(int i=0;i<n;i++)
    {
        cin>>strt[i]>>finish[i];
    }
    int i=0,j=0;
  cout<<i<<" ";
    for(j=1;j<n;j++)
    {
        if(strt[j]>=finish[i])

        {
           cout<<j<<" ";
            i=j;
        }
    }
    
    return 0;
}