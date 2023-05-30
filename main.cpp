#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 20003;

int A, B, n;
int a[MAXN], b[MAXN];
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
 
void solve()
{
    string str;
    int n= str.size();
    cin>>str;
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='a')
        {
            a++;
        }
        if(str[i]=='b')
        {
            b++;
        }
    }
    if(abs(a-b)==1)
    {
        cout<<str<<endl;
    }
    else 
    {
        if(abs(a-b)>1 )
        {
            if(b>a)
            {
            for(int i=0;i<n;i++)
            {
                if(str[i]=='a' && str[i+1]=='b')
                {
                    str[i]='b';
                }

            }
            }
            if(a>b)
            {
                   for(int i=0;i<n;i++)
            {
                if(str[i]=='a' && str[i+1]=='b')
                {
                    str[i+1]='a';
                }

            }
            }
        }
    cout<<str<<endl;    
    }
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        //solve();
    }
    return 0;
}