#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Decimal number :";
    cin>>n;
    int ans = 0;
    int power = 1;
    while (n > 0)
    {
        int parity = n % 2;
        ans += parity * power;
        power *= 10;
        n /= 2;
    }
    cout << ans;
}
