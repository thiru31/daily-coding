#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r1, c1, r2, c2;
    cout << "Enter the number of rows for matrix 1: ";
    cin >> r1;
    cout << "Enter the number of columns for matrix 1: ";
    cin >> c1;

    int arr1[r1][c1];
    cout << "Enter elements of array 1 : " << endl;
    for (size_t i = 0; i < r1; i++)
    {
        for (size_t j = 0; j < c1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Tranposed Matrix:" << endl;
    for (size_t i = 0; i < c1; i++)
    {
        for (size_t j = 0; j < r1; j++)
        {
            cout << arr1[j][i] << " ";
        }
            cout <<"\n";
    }
}