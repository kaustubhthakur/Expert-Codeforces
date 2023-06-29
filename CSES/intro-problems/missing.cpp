#include <bits/stdc++.h>
using namespace std;
#define ll long long;
#define ar array;
const int maxN = 2e5;
const int mod = 1e9 + 7;
int ans[maxN];

void solve()
{
    long long n;
    cin >> n;
    vector<int> a(n);
    long long ans=0;
    for (int i = 0; i < n-1; i++)
    {
        cin >> a[i];
        ans+=a[i];
    }
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum-ans<<endl;
}
int main()
{
    solve();
    return 0;
}