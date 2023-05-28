#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int maxi=INT_MIN;

    for(int i = 0; i < n; i++)
        {cin >> a[i];
        maxi = max(a[i],maxi);
        }
int cnt=0;
bool flag = false;
  for(int i=0;i<n;i++)
  {
if(abs(maxi-a[i])==1 || abs(maxi-a[i])==0)
{
    cnt++;
}
else 
{
    flag = true;
}
  }
  if(flag == true && cnt>n/2)
  {
    cout<<"NO"<<endl;
  }
  else 
  {
    cout<<"YES"<<endl;
  }
}
int main()
{

    solve();
    return 0;
}