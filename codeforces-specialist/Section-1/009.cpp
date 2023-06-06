#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() & 1 || s[0] == ')' || s.back() == '(')
           cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}