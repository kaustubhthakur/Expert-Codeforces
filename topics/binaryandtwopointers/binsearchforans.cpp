#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool good()
{
    
}
int main()
{

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int x;
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        int l = -1, r = n;
        while (r > l + 1)
        {
            int m = (l + r) / 2;
            if (a[m] <= x)
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }
        cout << l + 1 << " ";
        cout << endl;
    }

    return 0;
}
