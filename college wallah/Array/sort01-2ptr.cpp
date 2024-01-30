#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort(vector<int> &arr)
{
    int i = 0, j = arr.size() - 1;
    while (i <= j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        if (arr[j] == 1)
        {
            j--;
        }
        else
        {
            arr[i++] = 0;
            arr[j--] = 1;
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of array :";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the array elements :";
    for (int &ele : arr)
    {
        cin >> ele;
    }
    sort(arr);
    cout << "Sorted Array :";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}