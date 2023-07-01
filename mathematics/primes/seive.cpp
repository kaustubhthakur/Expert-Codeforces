#include <bits/stdc++.h>
using namespace std;
bool primes[10000001];
void seive()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
        primes[i] = 1;
    primes[0] = primes[1] = 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (primes[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (primes[i])
            cout << i << " ";
    }
}
int main()
{
    seive();
    return 0;
}