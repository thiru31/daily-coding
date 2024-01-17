#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int k;
    cout<<"Enter num to check pow of 2 :";
    cin >> k;
    if (k & (k - 1) ||k==0)
    {
        cout << "Not power of 2";
    }
    else
        cout << "power of 2";
}