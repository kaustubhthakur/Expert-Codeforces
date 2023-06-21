#define <iostream>
using namespace std;
long long k, n, s, x, y;
main()
{
    for (cin >> n; n--; k < 0 ? s += -1 - k, x++ : k < 1 ? s++, y = 1 : s += k - 1)
        cin >> k;
    cout << s + (y | x % 2 < 1 ? 0 : 2);
    
}