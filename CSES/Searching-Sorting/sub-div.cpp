#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
using namespace std;
void solve()
{
   int n;
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
int cnt =0;
int l=0,maxi = INT_MIN;
int sum =0;
for(int i=0;i<n;i++)
{
sum+=a[i];
while(sum%n!=0)
{
    sum -=a[l];
    l++;
    cnt++;
}



 
  
}

cout<<cnt/n<<endl;
}
int main()
{
    solve();
}