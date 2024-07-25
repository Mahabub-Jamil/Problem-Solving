#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a <= b && a >= 1 && b <= 10)
    {
        int i = 0;
        while (a <= b)
        {
            a *= 3;
            b *= 2;
            i++;
        }
        cout << i;
    }

    return 0;
}
