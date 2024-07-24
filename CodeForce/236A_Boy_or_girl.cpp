#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    char c[26] = {0};

    for (char ch : s)
    {
        if (islower(ch))
        {
            int index = ch - 'a';
            c[index] = 1;
        }
    }
    int count = 0;
    for(int i=0;i<26;++i)
    {
        if(c[i]==1)
        {
            count++;
        }
    }

    // for (int i = 0; i < 26; ++i)
    // {
    //     count+=c[i];
    // }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}