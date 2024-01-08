
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string brev, arev;
    cout << "Enter the string to reverse :";
    cin >> brev;
    arev = string(brev.rbegin(), brev.rend());
    cout << "Reversed string is :" << arev << endl;
    return 0;
}