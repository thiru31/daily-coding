#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2 * (rows - i) - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i < rows; i++)
    {
        for (int k = 0; k < 2 * i +1; k++)
        {
            cout << " ";
        }
        {
        for (int j = 0; j < 2 * (rows - i) - 1; j++)
            cout << "* ";
        }
        cout << endl;
    }
}