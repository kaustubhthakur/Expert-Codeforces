#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 20003;

int A, B, n;
int a[MAXN], b[MAXN];
void merging()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());

    vector<int> c(n + m);

    int i = 0, j = 0, k = 0;
    while (i < n || j < m)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    for (auto it : c)
    {
        cout << it << " ";
    }
}
bool is2Root(int x)
{
    int ans = sqrt(x);
    return ans * ans == x;
}
void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0 && is2Root(n / 2))
        cout << "YES" << endl;
    else if (n % 4 == 0 && is2Root(n / 4))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}