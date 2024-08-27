#include <bits/stdc++.h>
using namespace std;

int main()
{
    string player;
    int t1 = 0, t2 = 0;
    cin >> player;

    for (int i = 0; i < player.size(); i++)
    {
        if (player[i] == '1')
        {
            t1++;
            t2 = 0;
        }
        else if (player[i] == '0')
        {
            t2++;
            t1 = 0;
        }

        if (t1 >= 7 || t2 >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
