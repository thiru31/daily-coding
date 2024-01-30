#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string inp;
    cout << "Enter the string :";
    cin>>inp;
    std::replace(inp.begin(), inp.end(), '0', '1');
    cout << "The Result is :" << inp;
}