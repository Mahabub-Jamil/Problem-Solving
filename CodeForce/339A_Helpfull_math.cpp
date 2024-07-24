#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    vector<int> numbers;

    for(char c: s)
    {
        if(isdigit(c))
        {
            int num = c - '0';
            numbers.push_back(num);
        }

    }
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i];
        if (i < numbers.size() - 1) {
            cout << "+";
        }
    }

    return 0;
}