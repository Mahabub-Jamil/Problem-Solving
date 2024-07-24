#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<char> word;

    for (char c : s)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c = tolower(c);
        }
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
        {
            word.push_back(c);
        }
    }
    for (char c : word)
    {
        cout << '.' << c;
    }
}