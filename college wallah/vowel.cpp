#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character to check : ";
    cin >> ch;
    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        cout << "Vowel";
        break;
    default:
        cout << "Not a vowel";
        break;
    }
}