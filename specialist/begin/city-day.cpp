#include <bits/stdc++.h>
using namespace std;
int n, x, y, ans;
int main()
{
    cin >> n >> x >> y;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < a[ans])
        ans = i;
        if (i - ans == y)
            break;
    }
    cout << ans + 1<<endl;

    return 0;
}