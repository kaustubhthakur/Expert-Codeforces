#include <iostream>
using namespace std;
signed main()
{
    int n;
    cin >> n;
    while (cin >> n)
    {
        int x[n], y[n] = {}, i = n, j = 0;
        while (i--)
            cin >> x[i];

        while (++i < n)
            for (x[i] -= (j < i ? j = i : j) - i; j < n && x[i] > 0;)
                y[j++] = 1, x[i]--;

        while (i--)
            cout << y[i] << ' ';
    }
    return 0;
}