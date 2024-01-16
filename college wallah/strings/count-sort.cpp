#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string to be sorted";
    cin >> str;
    vector<int> freq(26, 0);
    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i] - 'a']++;
    }
    // for (int &ele : freq)
    //     cout << ele << " ";
    cout<<"sorted string : ";
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < freq[i]; j++)
        {
            cout << char(i + 97);
        }
    }
}
