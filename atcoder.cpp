#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string str, s;
    cin >> str >> s;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0' && s[i] == 'o' || str[i] == 'o' && s[i] == '0')
        {
            cout << "YES" << endl;
            return;
        }
        else if (str[i] == '1' && s[i] == '1' || str[i] == 'l' && s[i] == '1')
        {
            cout << "YES" << endl;
            return;
        }
        else

        {
            cout << "NO" << endl;
            return;
        }
    }
}
int main()
{

    solve();
    return 0;
}