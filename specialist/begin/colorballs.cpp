#include <iostream>
using namespace std;

int T, r, g, b, w;
main()
{
    for (cin >> T;
         T--; cout << (w < 2 || w > 2 && r * g * b ? "YES " : "NO "))
        cin >> r >> g >> b >> w, w = w % 2 + r % 2 + g % 2 + b % 2;
        return 0;
}