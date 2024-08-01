#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, id, maxScore = 0;

    cin >> n;
    vector<int> contestent(n + 1, 0); // Initialize the vector with size n+1 and all elements set to 0

    for (int i = 1; i <= 10; i++)
    {
        cin >> id;
        contestent[id]++;
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
            cout << i << " "; // Corrected the output to print the contestant ID
        }
    }

    return 0;
}
