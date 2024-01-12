#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    // int arr[] = {1, 2, 3, 4, 5};
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size];
    cout<<"Enter the Elements of array :"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    // size = end(arr)-begin(arr);
    size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}