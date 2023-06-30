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
#define nl cout << '\n';
#define ce cout << endl;
using namespace std;
priority_queue<int, vector<int>, greater<int>> max_heap;
const int N = 20003;
const int mod = 1e9 + 7;
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
long long inv(long long a, long long b)
{
    return 1 < a ? b - inv(b % a, a) * b / a : 1;
}
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
if(k==1)
{
    cout<<"NO"<<endl;
    return ;
}
if(x!=1)
{
    cout<<"YES"<<endl;
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<1<<" ";
         
    }
    cout<<endl;
    return ;
}
if(n%2==0)
{
    cout<<"YES"<<endl;
    cout<<n/2<<endl;
    for(int i=0;i<n/2;i++)
    {
        cout<<2<<" ";
    }
    cout<<endl;
    return;
}
if(k==2)
{
    cout<<"NO"<<endl;
    return ;
}
cout<<"YES"<<endl;
cout<<n/2<<endl;
for(int i=1;i<n/2;i++)
{
    cout<<2<<" ";
}
cout<<3<<endl;
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