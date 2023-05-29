#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100010;
 
int A, B, n;
int a[MAXN], b[MAXN];
void solve()
{
   
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

for(int i=0;i<n;i++)
{
    cout<<n+1-a[i]<<" ";
}
cout<<endl;
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