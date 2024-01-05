// Inverted left pyramid
#include <iostream>
using namespace std;
// Inverted Left pyramid 
int main()
{
    int rows;
    cout << "Enter the number of rows :";
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2*i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <(rows - i); k++)
        {
            cout << "* ";
        }
    cout << endl;
    }
}