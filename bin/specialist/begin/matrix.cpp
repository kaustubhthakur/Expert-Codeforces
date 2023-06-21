#include <bits/stdc++.h>
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define REP(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
const int MAXN = 2003;
const int mod = 1e9 + 7;
int A, B, n;
// int a[MAXN], b[MAXN];
int grid[MAXN][MAXN];
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
int mex(int arr[], int N)
{

 
  sort(arr, arr+N);

  int mex = 0;
  for (int idx = 0; idx < N; idx++)
  {
    if (arr[idx] == mex)
    {
     
      mex += 1;
    }
  }


  return mex;
}
void solve()
{
int n,m;
cin>>n>>m;
set<int>s,st;
REP(i,1,n)
{
    REP(j,1,m)
    {
        cin>>grid[i][j];
        if(grid[i][j]==1)
        {
s.insert(i);
st.insert(j);
        }
    }
}
int mini = min(n-s.size(),m-st.size());
if(mini%2)
{
    cout<<"Ashish"<<endl;
}
else 
{
    cout<<"Vivek"<<endl;
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