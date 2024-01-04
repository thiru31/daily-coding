//row column transpose matrix

#include <iostream>
using namespace std;

int main()
{
    int a[10][10], transpose[10][10], r, c, i, j;

    cout << "Enter rows and columns of matrix: ";
    cin >> r >> c;

    cout << endl << "Enter elements of matrix: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }

  
    return 0;
}