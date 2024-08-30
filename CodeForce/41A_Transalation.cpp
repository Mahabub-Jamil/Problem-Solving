#include <iostream>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int n = s.size();

    for (int i = 0; i < n / 2; i++)
    {
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
    (s == t) ? cout << "YES" : cout << "NO";
}