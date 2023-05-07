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
    vector<int>a(n);
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
maxi = max(maxi,a[i]);
    }

for(int i=0;i<n;i++)
{
    a[i] = a[i]%maxi;
}
int pali = reverse(a.begin(),a.end());
    }
    return 0;

}