#include <bits/stdc++.h>
using namespace std;
#define ll long long;
#define ar array;
const int maxN = 2e5;
const int mod = 1e9 + 7;
int ans[maxN];

void solve()
{
    long long n;
    cin >> n;
    cout<<n<<" ";
  while(n!=1)
  {
    if(n%2==0)
    {
        n=n/2;

    }
    else 
    {
        n= (n*3)+1;
    }
    cout<<n<<" ";
  }
    
}
int main()
{
    solve();
    return 0;
}