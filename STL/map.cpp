#include <bits/stdc++.h>
using namespace std;
int main()
{
/*    // maps
map<string,int>mp;
mp.insert(make_pair("mango",100));
mp["grapes"] = 10;
for(auto it = mp.begin();it!=mp.end();it++)
{
    cout<<it->first<<" "<<it->second<<endl;
}
// multimaps

multimap<char,string>m;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    char ch;
    string str;
    cin>>ch>>str;
    m.insert(make_pair(ch,str));

}
for(auto it :m)
{
    cout<<it.first<<" "<<it.second<<endl;
}
*/
// unordered map
unordered_map<string,int>um;
um.insert(make_pair("catfish",10));
um.insert(make_pair("catfis",100));
um.insert(make_pair("catfsh",1));
um.insert(make_pair("catfh",110));
um.insert(make_pair("cfish",120));
for(auto it=um.begin();it!=um.end();it++)
{
    cout<<it->first<<" "<<it->second<<endl;
}
    return 0;
}