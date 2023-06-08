#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
stack<int>s;
s.push(12);
s.push(133);
s.push(121);
s.push(10);
cout<<s.size()<<endl;
while(!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}

cout<<endl;
return 0;
}