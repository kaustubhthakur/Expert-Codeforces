#include <bits/stdc++.h>
using namespace std;
long long prefixSum(vector<int>a)
{
    int n = a.size();
   int prefix[n+1];
    for(int i=0;i<n;i++)
    {
        prefix[i+1]=prefix[i]+a[i];
    }
    return prefix;
}
int main()
{
int n,q;
cin>>n>>q;

}