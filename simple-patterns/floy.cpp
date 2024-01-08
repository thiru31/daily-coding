
#include <iostream>
using namespace std;

int main()
{
    int rows;
    int count =1;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout <<count<<" ";
            count++;
        }
        cout << endl;
    }
    return 0;
}