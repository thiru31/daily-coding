#include <iostream>
using namespace std;

int main()
{
    int size;
    // int arr[] = {1, 2, 3, 4, 5};
    cout << "Enter the size of array :";
    cin >> size;
    int arr[size];
    cout << "Enter the Elements of array :" << endl;
    int i = size;
    while (i > 0)
    {
        cin >> arr[i];
        i--;
    }
    // size = end(arr)-begin(arr);
    size = sizeof(arr) / sizeof(arr[0]);
    i = 0;
    while (i < size)
    {
        cout << arr[i] << " ";
        i++;
    }
}