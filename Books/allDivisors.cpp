#include<bits/stdc++.h>

using namespace std;

vector<int> Divisors[1000002];

void divisors(int n)
{
    int i,j;

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j+=i)
        {
            Divisors[j].push_back(i);
        }
    }
    for (i = 1; i <= n; i++)
    {
        cout << "Divisors of " << i << ": ";
        for (int divisor : Divisors[i])
        {
            cout << divisor << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin>>n;
    divisors(n);
}