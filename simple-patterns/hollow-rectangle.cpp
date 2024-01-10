
#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    for (int i = 0; i < rows; i++)
    {
        if (i == 0 || i == rows - 1)
        {
            for (int j = 0; j < columns; j++)
            {

                cout << "* ";
            }
            cout << endl;
            continue;
        }
        else
            cout << "*";

            for (int j = 0; j < 2*(columns-2)+1; j++)
            {
                cout<<" ";
            }
            cout << "*";
            cout << endl;
    }
    return 0;
}