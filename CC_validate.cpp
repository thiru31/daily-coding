#include <iostream>
using namespace std;    


int main()  
{  
    long int number;
    cout << "Enter a credit card number: ";
    cin >> number;
    cout << number << " is " << (isValid(number) ? "valid" : "invalid");  
    return 0;  
}  