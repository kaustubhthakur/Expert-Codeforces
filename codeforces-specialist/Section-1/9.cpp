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
        string str;
        cin>>str;
        int ans = 0;
    set < string > c;
        for (int i = 0; i < n-1; i ++) {
            string temp = str.substr(i, 2);
            if (!c.count(temp)) c.insert(temp), ans ++;
        }
 
        cout << ans << '\n';
    }
    return 0;
}