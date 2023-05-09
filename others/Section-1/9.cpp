#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str= "codeforces";
        string s;
        cin>>s;
        int cnt=0;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
if(str[i]!=s[i])
{
    cnt++;
}
        }
 cout<<cnt<<endl;
    }
    return 0;
}