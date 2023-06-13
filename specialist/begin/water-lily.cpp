#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
 ll H, L;
    cin >> H >> L;
 
    double anser = (pow(L, 2) - pow(H, 2)) / (2 * H);
 
    cout << fixed << setprecision(13) << anser << endl;
    return 0;
}