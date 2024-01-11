#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number of lines to be printed :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        if (i == n / 2)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < n / 2; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}