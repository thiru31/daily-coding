#include <iostream>
using namespace std;

int main()
{
    int base, power, i, pow = 1;
    cout << "Enter base of a number : ";
    cin >> base;
    cout << "\nEnter power to a base "<<base<<": ";
    cin >> power;

for(i=power;i>0;i--)
   {
        pow=pow*base;
   }
   cout<<" \nThe final result calculated is: "<<pow<<endl;
    return 0;
}