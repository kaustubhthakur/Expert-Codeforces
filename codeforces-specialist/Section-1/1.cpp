#include <bits/stdc++.h>
using namespace std;
const int N = 10003;
int a[N];
int b[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i <n; i++)
            cin >> b[i];



            int l=-1,r=-1;
            for(int i=0;i<n;i++)
            {
                if(a[i]!=b[i])
                {
                    r=i;
                    if(l==-1)
                    {
                        i=i;
                    }
                }
            }
            while(l>0 && b[l-1]<=b[l])
            l--;

            while(r<n-1 && b[r+1]>=b[r])
            r++;
            cout<<l+1<<" "<<r+1<<endl;
    }
    return 0;
}