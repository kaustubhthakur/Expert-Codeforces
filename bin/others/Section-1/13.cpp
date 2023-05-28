#include <bits/stdc++.h>
using namespace std;
const int N = 10003;
int a[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int maxi = 0;
        for (long long i = 1; i <= n; i++)
        {
            cin >> a[i];
            maxi = max(maxi, a[i]);
        }
        sort(a+1, a + n + 1 );
        long long sum = 0;
        for (long long  i = 1; i <= n; i++)
        {
            sum += a[i];
        }
        if (k == 1)
        {
            cout << sum - (a[1] + a[2]) << endl;
        }
        else if (k == 2)
        {
            cout << sum - (maxi + (a[1] + a[2])) << endl;
        }
    }
    return 0;
}