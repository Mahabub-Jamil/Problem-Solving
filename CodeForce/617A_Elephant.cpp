#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int fullsteps = n / 5;
    int remainder = n % 5;

    int additianalsteps = (remainder > 0) ? 1 : 0;

    int totalsteps = fullsteps + additianalsteps;

    cout << totalsteps;
}