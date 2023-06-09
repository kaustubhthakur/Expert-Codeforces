#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n<k)
    {
        cout<<-1<<endl;
    }
    int maxi = 0;
    for(int i=0;i<n;i++)
    {
        maxi+=a[i];
    }
    int curr_sum = maxi;
    for(int i=k;i<n;i++)
    {
        curr_sum+=a[i]-a[i-k];
        maxi  = max(maxi,curr_sum);
    }
    cout<<maxi<<endl;

}