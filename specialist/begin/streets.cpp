#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, maxi = INT_MAX;
        cin >> n >> k;
        int a[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= 100; i++)
        {
            int j = 1, ans = 0;
            while (j <= n)
            {
                if (a[j] != i)
                    ans++, j += k;
                else
                    j++;
            }
            maxi = min(maxi, ans);
        }
        cout << maxi << endl;
    }
    return 0;
}