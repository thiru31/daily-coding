#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void remove_char(string str, vector<int> freq, int k)
{
    for (size_t i = 0; i < 26; i++)
    {
        if (freq[i] == k)
        {
            char ch = char(i + int('a'));
            // cout << ch;
            replace(str.begin(), str.end(), ch, '1');
        }
    }
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
            continue;
        else
            cout << str[i];
    }
}

int main()
{
    string str;
    cout << "Enter the string : ";
    cin >> str;
    int k;
    cout << "Enter the count of concequtive charcters : ";
    cin >> k;
    vector<int> freq(26, 0);
    for (size_t i = 0; i < str.length(); i++)
    {
        freq[str[i] - 'a']++;
    }

    // for(auto &ele:freq)
    // {
    //    cout<<ele<<" ";
    // }
    remove_char(str, freq, k);
}