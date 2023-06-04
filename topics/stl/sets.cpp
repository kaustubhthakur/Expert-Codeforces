#include <bits/stdc++.h>
using namespace std;
int main()
{
  /*
  set<char>s;
    s.insert('G');
    s.insert('F');
    s.insert('G');
    for(auto it:s)
    {
        cout<<it<<" ";
    }
cout<<s.size()<<endl;

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    set<int,greater<int>>s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(auto it:s)
    {
        cout<<it<<" ";
    }
    if(s.empty())
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
  */  
 //multi-set
multiset<int>ms;
ms.insert(2);
ms.insert(2);
ms.insert(2);ms.erase(ms.find(2));
cout<<ms.size()<<endl;
cout<<ms.count(2)<<endl;


    return 0;
}