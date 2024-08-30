#include <iostream>
#include <algorithm>
using namespace std;

string checkWinner(const string &s)
{
    int a = count(s.begin(), s.end(), 'A');
    int d = s.size() - a;

    if (a > d)
    {
        return "Anton";
    }
    else if (d > a)
    {
        return "Danik";
    }
    else
    {
        return "Friendship";
    }
}

int main()
{
    int n;
    string s;

    cin >> n >> s;

    cout << checkWinner(s) << endl;

    return 0;
}
