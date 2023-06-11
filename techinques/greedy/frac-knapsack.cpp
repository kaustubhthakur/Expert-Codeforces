#include <bits/stdc++.h>
using namespace std;
struct Item
{
    int value;
    int weight;
    
};
bool cmp(pair<int,int>a,pair<int,int>b)
{
    double r1 = (double)a.first / a.second;
    double r2 = (double)b.first / b.second;
    return r1 > r2;
}
double knapsack(Item A[], int capacity, int n)
{
    sort(A, A + n, cmp);
    int curr = 0;
    double final = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (curr + A[i].weight <= capacity)
        {
            curr += A[i].weight;
            final += A[i].value;
        }
        else
        {
            int remain = capacity - curr;
            final += A[i].value * ((double)remain / (double)A[i].weight);
        }
    }
    return final;
}
int main()
{
    Item A[] = {{60, 10}, {100, 20}, {120, 30},{100,20}};
    int N = sizeof(A) / sizeof(A[0]);
    int w = 50;
    cout << knapsack(A, w, N);
    return 0;
}