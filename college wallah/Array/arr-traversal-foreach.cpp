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
    for (int &elements : arr)
    {
        cin >> elements;
    }
    for (int &elements : arr)
    {
        cout << elements << " ";
    }

    // size = end(arr)-begin(arr);
    // size = sizeof(arr) / sizeof(arr[0]);
}