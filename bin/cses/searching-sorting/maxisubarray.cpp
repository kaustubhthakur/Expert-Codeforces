#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll maxi = INT_MIN, curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr += a[i];
        if (maxi < curr)
        {
            maxi = curr;
        }
        if (curr < 0)
        {
            curr = 0;
        }
    }
    cout << maxi << endl;
}
int main()
{
    solve();
}