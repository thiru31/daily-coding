#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array :";
    cin >> size;
    int arr[size];
    cout << "Enter the Elements of array :" << endl;
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "The maximum of the array is :" << max;
}