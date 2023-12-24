#include <iostream>
using namespace std;    

int sumOfDoubleEvenPlace(long int number)  
{  
    int sum = 0;  
    while (number != 0)  
    {  
        number = number / 10;  
        sum = sum + getDigit((number % 10) * 2);  
        number = number / 10;  
    }  
    return sum;  
}


int main()  
{  
    long int number;
    cout << "Enter a credit card number: ";
    cin >> number;
    cout << number << " is " << (isValid(number) ? "valid" : "invalid");  
    return 0;  
}  