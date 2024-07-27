#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, id, contestent[n], maxScore = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        contestent[i] = 0;
    }

    for (int i = 1; i <= 10; i++)
    {
        cin >> id;
        contestent[i] = contestent[i] + 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (maxScore < contestent[i])
        {
            maxScore = contestent[i];
        }
    }

    cout << "Winners are:\n";
    for (int i = 1; i <= n; i++)
    {
        if (maxScore == contestent[i])
        {
            cout << i + 1;
        }
    }
}