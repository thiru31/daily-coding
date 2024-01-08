#include <iostream>
using namespace std;

int main()
{
    int rows, j, k;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (j = 1; j < rows - i+1; j++)
        {
            cout << " ";
        }
        int C = 1;
        for (k = 1; k <= i; k++)
        {
            // cout << "* " ;
            cout << C << " ";
            C = C * (i - k) / k;
        }
        cout << endl;
    }
}