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
#define nl cout<<'\n';
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
void solve()
{
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

bool issorted = is_sorted(a.begin(),a.end());
if(issorted==true)
{
    cout<<0<<endl;
}
else if(a[0]=1 || a[n-1]==n)  
{
cout<<1<<endl;
}
else if(a[0]==n && a[n-1]==1)
{
    cout<<3<<endl;
}
else 
{
    cout<<2<<endl;
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