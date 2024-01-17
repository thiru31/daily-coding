#include <iostream>
using namespace std;

int count_set(int x)
{
    int count = 0;
    while (x)
    {
        if (x & 1)
        {
            count++;
        }
        x = x >> 1;
    }
    return count;
}

int main()
{
    int k, k2, res;
    cout << "Enter num 1 :";
    cin >> k;
    cout << "Enter num 2 :";
    cin >> k2;
    res = k ^ k2;
    cout <<"Number of flips required : "<< count_set(res);
}