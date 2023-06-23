#include <bits/stdc++.h>
using namespace std;
void solve()
{
    list<int>l{1,2,3,4,5,6,7,11,8};
    l.sort();
   
    l.pop_front(); l.push_front(100);
    for(auto it :l)
    {
        cout<<it<<" ";
    }
    
    
}
void sol()
{
 list<int>l{1,2,3,4,1,2,3,5,6,7,11,8};
 l.remove(3);
 auto it =l.begin();
 it++;
 l.erase(it); 
 l.insert(2,100);
for(auto it :l)
{
    cout<<it<<" ";
}
}
int main()
{

sol();
return 0;
}