#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    int comp;
    for (int i = 0; i < (2 * rows) - 1; i++)
    {
        if (i < rows)
        {
            comp = 2 * (rows - i) - 1;
        }

        else
        {
            comp = 2 * (i - rows + 1) + 1;
        }

        for (int j = 0; j < comp; j++)
        {
            cout << " ";
        }
        char ch= 65;
        for (int k = 0; k < 2 * rows - comp; k++)
        {
            cout <<ch<< " ";
            ch++;
        }
        cout << endl;
    }
}