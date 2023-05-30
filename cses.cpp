#include <bits/stdc++.h>
#define ll long long
using namespace std;

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
void TwoSum()
{
long long n, m;
    cin >> n >> m;
  map<long long,long long>mp;
    for (long long i = 0; i < n; ++i)
    {
        long long a;
        cin>>a;
        if(mp.find(m-a)!=mp.end())
        {
            cout<<mp[m-a]+1<<" "<<i+1;
            return ;
        }
        mp[a]=i;

    }
    cout<<endl;
    cout<<"IMPOSSIBLE"<<endl;
  
}
void maxSub()
{
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int sub_arr=0;
for(int i=0;i<n;i++)
{
    sub_arr+=a[i];
}
}
int main()
{
   
     maxSub();
        //TwoSum();
        // solve();
    
    return 0;
}