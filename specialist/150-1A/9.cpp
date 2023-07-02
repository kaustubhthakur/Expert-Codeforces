#include <bits/stdc++.h>
#define ll long long;
#define rof(i, a, b)              \
    for (int i = a; i > = b; i--) \
        ;
#define REF(i, a, b)             \
    for (int i = a; i <= b; i++) \
        ;
#define rep(i, a, b)            \
    for (int i = a; i < b; i++) \
        ;
#define nl '\n';
#define ce cout << endl;
using namespace std;
priority_queue<int, vector<int>, greater<int>> max_heap;
const int N = 20003;
const int mod = 1e9+7;
int a[N];
int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}
long long binexp(long long a, long long b)
{
    if (b == 0)
    {
        return 1;
    }
    long long res = binexp(a, b / 2);
    if (b % 2)
    {
        return (res * res * a);
    }
    else
    {
        return (res * res);
    }
}
void solve()
{
int n,m;
cin>>n>>m;
long long suma=0,sumb=0;
vector<int>a(n);
vector<int>b(m);
for(int i=0;i<n;i++)
{
cin>>a[i];
suma+=a[i];
}
for(int i=0;i<m;i++)
{
    cin>>b[i];
    sumb+=b[i];
}
if(suma==sumb)
{
    cout<<"Draw"<<endl;
}
else if(suma>sumb)
{
    cout<<"Tsondu"<<endl;
}
else 
{
    cout<<"Tenzing"<<endl;
}
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