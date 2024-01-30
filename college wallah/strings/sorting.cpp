#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string :";
    cin >> str;
    sort(str.begin(), str.end());
    cout << "String after sorting :" << str<<endl;
    sort(str.begin(), str.end(), greater<int>());
    cout << "Sorted in decending order :" << str;
    return 0;
}