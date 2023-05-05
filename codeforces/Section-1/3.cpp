#include <bits/stdc++.h>
using namespace std;
main()
{
    int n, x;
    cin >> n;
    while (cin >> n)
    {
        map<int, int> m;
        while (n--)
            cin >> x, m[x]++ ? m[-x]++ : 0;
        cout << m.size() << ' ';
    }
    return 0;
}