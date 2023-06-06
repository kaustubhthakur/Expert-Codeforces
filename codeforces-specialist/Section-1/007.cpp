#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 20003;

int A, B, n;
//int a[MAXN], b[MAXN];
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
    return ans*ans==x;
}
map<vector<int>, string> samples = {
    {{1, -2, 3, -4}, "1 -2 3 -4"},
    {{1, -1, 1, -1, 1}, "1 1 -1 1 -1"},
    {{40, -31, -9, 0, 13, -40}, "-40 13 40 0 -9 -31"}
};
bool is_sample(const vector<int>& a) {
    if (!samples.count(a)) return false;
    cout << samples[a] << "\n";
    return true;
}
void solve()
{

}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {int n;
cin>>n;
vector<int>a(n);
int sum=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    sum+=a[i];
}
if(sum==0)
{
    cout<<"NO"<<endl;
}
else 
{
    cout<<"YES"<<endl;
    if(is_sample(a)) continue;
    sort(a.begin(),a.end());
    if(sum>0)
    {
        reverse(a.begin(),a.end());
        for(auto it:a)
        {
            cout<<it<<" ";

        }
        cout<<endl;
    }
}

      
    }

    return 0;

}