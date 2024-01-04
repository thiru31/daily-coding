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
  // Displaying the matrix a[][]
    // cout << endl << "Entered Matrix: " << endl;
    // for(i = 0; i < r; ++i)
    //     for(j = 0; j < c; ++j)
    //     {
    //         cout << " " << a[i][j];
    //         if(j == c - 1)
    //             cout << endl << endl;
    //     }

    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }

    cout << endl << "Transpose of Matrix: " << endl;
    for(i = 0; i < c; ++i)
        for(j = 0; j < r; ++j)
        {
            cout << " " << transpose[i][j];
            if(j == r - 1)
                cout << endl << endl;
        }

  
    return 0;
}