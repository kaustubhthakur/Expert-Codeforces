/*
Dima Vatrushin is a math teacher at school. He was sent on vacation for n
 days for his good work. Dima has long dreamed of going to a ski resort, so he wants to allocate several consecutive days and go skiing. Since the vacation requires careful preparation, he will only go for at least k
 days.

You are given an array a
 containing the weather forecast at the resort. That is, on the i
-th day, the temperature will be ai
 degrees.

Dima was born in Siberia, so he can go on vacation only if the temperature does not rise above q
 degrees throughout the vacation.

Unfortunately, Dima was so absorbed in abstract algebra that he forgot how to count. He asks you to help him and count the number of ways to choose vacation dates at the resort.

*/

#include <bits/stdc++.h>
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define REP(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
const int MAXN = 20003;
const int mod = 1e9 + 7;
int A, B, n;
// int a[MAXN], b[MAXN];
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
map<vector<int>, string> samples = {
    {{1, -2, 3, -4}, "1 -2 3 -4"},
    {{1, -1, 1, -1, 1}, "1 1 -1 1 -1"},
    {{40, -31, -9, 0, 13, -40}, "-40 13 40 0 -9 -31"}};
bool is_sample(const vector<int> &a)
{
    if (!samples.count(a))
        return false;
    cout << samples[a] << "\n";
    return true;
}
ll Power(ll b)
{
    return pow(2, b);
}
void solve()
{
   int n, k;
    cin >> n >> k;
    k = min(k,30);

    int ans = min(n,(1<<k)-1)+1;
    cout<<ans<<endl;
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