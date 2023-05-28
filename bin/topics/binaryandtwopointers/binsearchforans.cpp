#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long w, h, n;
bool good(long long m)
{
    return (m / w) * (m / h) >= n;
}
int main()
{

    cin >> w >> h >> n;
    long long l = 0;
    long long r = 1;
    while (!good(r))
    {
        r *= 2;
    }
    while (r > l + 1)
    {
        long long m = (l + r) / 2;
        if (good(m))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    cout << l << " " << endl;

    return 0;
}
