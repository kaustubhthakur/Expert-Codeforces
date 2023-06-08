#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int a[10] = {1,4,7,6,99,0,2,11,12,23};
    priority_queue<int>max_pq;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<10;i++)
    {
        max_pq.push(a[i]);
        pq.push(a[i]);
    }
    cout<<"max heap"<<endl;
    while (!max_pq.empty())
    {
        cout<<max_pq.top()<<" ";
        max_pq.pop();
    }
    cout<<endl;
    cout<<"min heap"<<endl;
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    

}