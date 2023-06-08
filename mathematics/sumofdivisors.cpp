#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    if(n==1)
    {
        cout<<cnt<<endl;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
           if(i==(n/i))
           {
            cnt+=i;
           }
           else 
           {
            cnt+=(i+n/i);
           }
        }
    }
    cout << cnt+1 << endl;
    return 0;
}