#include <iostream>
using namespace std;

int count_ways(int n)
{
    int res;
    if (n == 1)
    {
        res = 1;
    }
    else if (n == 2)
    {
        res = 2;
    }
    else
    {
        res = count_ways(n - 1) + count_ways(n - 2);
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the number of stairs :";
    cin >> n;
    cout << count_ways(n);
}