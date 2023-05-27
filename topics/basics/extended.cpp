#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int gcd(int a, int b, int x, int y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int dx, dy;
    int d = gcd(b, a % b, dx, dy);
    x = dy;
    y = dx - dy * (a / b);
    return d;
}
int main()
{
    int a, b, x, y;
    cin >> a >> b;
    int g = gcd(a, b, x, y);
    cout << a/g << " " << b/g << " " << g << endl;

    return 0;
}