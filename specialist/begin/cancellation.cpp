#include <bits/stdc++.h>
using namespace std;

int t, n, x;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (s + x > 0)
                s += x;
            else
                s = 0;
        }
        cout << s << endl;
    }
    return 0;
}
