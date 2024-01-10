
#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = 1; i < rows; i++)
    {
        if (i % 2 != 0)
        {
            for (int i = 0; i <= int(rows / 2); i++)
            {
                cout << "12";
            }
        }
        else
            for (int i = 0; i <= int(rows / 2); i++)
            {
                cout << "21";
            }
        cout << endl;
    }
    return 0;
}