#include <bits/stdc++.h>
using namespace std;

void exchange(string s)
{
    int upperCase = 0, lowerCase = 0;
    for (int i = 0; i < s.size(); i++)
    {
        (s[i] >= 'A' && s[i] <= 'Z') ? upperCase++ : lowerCase++;
    }
    for (char &c : s)
    {
        (upperCase <= lowerCase) ? c = tolower(c) : c = toupper(c);
    }
    cout << s;
}
int main()
{
    string s;
    cin >> s;
    exchange(s);
}