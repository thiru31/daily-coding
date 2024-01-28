#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch (n)
    {
    case 2:
        cout << "hello";
        break;
    case 1:
        cout << "world";
        break;
    default:
        cout << "enter valid input";
        break;
    }
}