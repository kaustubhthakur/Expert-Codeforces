#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (mp.count(str) > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
           mp[str] = true; 
            cout << "NO" << endl;
        }
    }

    return 0;
}