#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the binary number :";
    cin>>n;
    int ans = 0;
    int power = 1;
    while (n > 0)
    {
        int last = n % 10;
        ans += last * power;
        power *= 2;
        n /= 10;
    }
    cout << ans;
}
