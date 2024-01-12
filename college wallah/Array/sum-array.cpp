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
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "The sum of the array :" << sum;
}