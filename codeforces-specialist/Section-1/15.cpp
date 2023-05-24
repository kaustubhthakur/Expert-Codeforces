#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string str;
    for(int i=1;i<=n;i++)
    cin>>str[i];

 vector<int>ans(n);
 int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(str[i-1]==str[i]and str[i]!=str[i])
        {
            cnt+=3;
        }
        if(str[i-1]!=str[i] && str[i]==str[i+1])
        {
            cnt+=5;
        }
        ans.push_back(cnt);
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
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