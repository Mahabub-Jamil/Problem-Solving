#include <bits/stdc++.h>

using namespace std;

int Prime[300000], nPrime;

int mark[1000002];

void sieve(int n)
{
    int i, j, limit = sqrt(n * 1.) + 2;
    mark[1] = 1; // Not Prime

    for (i = 4; i <= n; i += 2)
    {
        mark[i] = 1; // Not prime
    }

    Prime[nPrime++] = 2;

    for (i = 3; i < n; i += 2)
    {
        if (!mark[i])
        {
            Prime[nPrime++] = i;
            if (i <= limit)
            {
                for (j = i * i; j <= n; j += i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
    for (int i = 0; i < nPrime; i++)
    {
        cout<<"Prime number: " << Prime[i]<<endl;
    }
    for (int i = 1; i <=n; i++)
    {
        cout<<i<<" Prime marking(0 prime,1 not prime): " << mark[i]<<endl;
    }
    cout<<"Total prime number of this range: "<<nPrime;
}
int main()
{
    int n;
    cin >> n;
    sieve(n);
}