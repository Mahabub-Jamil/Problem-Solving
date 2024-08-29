#include <iostream>
#include <string>

using namespace std;

bool isLucky(int count)
{
    string str = to_string(count);
    for (char digit : str)
    {
        if (digit != '4' && digit != '7')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    long long n;
    cin >> n;

    int temp = 0;
    string str = to_string(n);

    for (char digit : str)
    {
        if (digit == '4' || digit == '7')
        {
            temp++;
        }
    }

    if (isLucky(temp))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
