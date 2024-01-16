#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    cout << str<<endl;
    string arev= string(str.rbegin(),str.rend());
    cout <<arev<<endl;
    // reverse(arev.begin(), arev.end());
    // cout << str<<endl;
}
