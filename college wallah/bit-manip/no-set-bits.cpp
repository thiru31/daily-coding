#include <iostream>
using namespace std;

int main()
{
    int k;
    int count = 0;
    cin >> k;
    while (k)
    {
        if (k & 1)
        {
            count++;
        }
        k = k >> 1;
    }
    cout << count;
}