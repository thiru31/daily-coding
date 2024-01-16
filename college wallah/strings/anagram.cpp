#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter the strings to be checked :";
    cin >> str1;
    cin >> str2;
    if (str1.length() != str2.length())
    {
        cout << "Not anagram" << endl;
    }
    else
    {
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        if (str1 == str2)
        {
            cout << "Anagram" << endl;
        }
        else
            cout << "Not anagram";
    }
}
