#include <iostream>
using namespace std;
int n, sm;
long long k, t;
int main()
{
    cin >> n;
    for (; n--;)
    {
        cin >> k;
        if (k % 2050)
        {
            cout << "-1\n";
            continue;
        }
        k /= 2050;
        sm = 0;
        while (k)
        {
            sm += k % 10;
            k /= 10;
        }
        cout << sm << "\n";
    }
    return 0;
}