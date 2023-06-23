#include <bits/stdc++.h>
#define ll long long;
#define rof(i, a, b) for (int i = a; i > = b; i--);
#define REF(i, a, b) for (int i = a; i <= b; i++) ;
#define rep(i, a, b) for (int i = a; i < b; i++) ;
#define nl '\n';
#define ce cout << endl;
using namespace std;
priority_queue<int,vector<int>,greater<int>>max_heap;
const int N = 20003;
int a[N];
int gcd (int a, int b) {
    return b ? gcd (b, a % b) : a;
}
void solve()
{

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