#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int dollers = k * (w * (w + 1)) / 2;
    int borrow = ((dollers - n) < 0) ? 0 : (dollers - n);
    cout << borrow;
}