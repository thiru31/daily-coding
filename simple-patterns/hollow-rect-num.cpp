
#include <iostream>
using namespace std;

int main()
{
    int rows, i, j;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        if (i == rows || i == 1)
            for (int j = 1; j <= rows; j++)
            {
                cout <<" "<< j;
            }
        else{
            cout<<" 1";
            for ( int k = 0; k < 2*(rows-2)+1; k++)
            {
                cout<< " ";
            }
            cout<<rows;
        }
        cout << endl;
    }

    return 0;
}