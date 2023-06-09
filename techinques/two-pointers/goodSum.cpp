#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0,sum=0;
    int maxi = INT_MIN;
    for(int i=0;i<=n-1;i++)
    {
        sum+=a[i];
        while(sum>s)
        {
            sum-=a[l];
            l++;
        }
        maxi = max(maxi,i-l+1);
    }
    cout<<maxi<<endl;
}