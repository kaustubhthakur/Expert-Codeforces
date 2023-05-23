#include <bits/stdc++.h>
using namespace std;
const int N = 200001;
int a[N];
void solve()
{
  long long n,k;
  cin>>n>>k;
  if(k==1)
  {
    cout<<"NO"<<endl;
  }
  else 
  {
  cout<<"YES"<<endl;
  cout<<n<<" "<<n*(long long)k<<" "<<n*(long long)(k+1)<<endl;
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