#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> arr1 = {1, 3, 5, 7, 9};
    // vector<int> arr2 = {2, 4, 6, 8, 10, 11, 12, 13};
    int size1;
    int size2;
    cout << "Enter the size of array 1 :";
    cin >> size1;
    cout << "Enter the size of array 2 :";
    cin >> size2;
    vector<int> arr1(size1);
    vector<int> arr2(size2);
    cout << "Enter the array 1 elements :";
    for (int &ele : arr1)
    {
        cin >> ele;
    }
    cout << "Enter the array 2 elements :";
    for (int &ele : arr2)
    {
        cin >> ele;
    }
    int i = 0, j = 0;
    int tot_size = arr1.size() + arr2.size();
    cout << "merged sorted array is :";
    for (int k = 0; k < tot_size; k++)
    {
        if (i == arr1.size())
        {
            cout << arr2[j] << " ";
            j++;
        }
        else if (j == arr2.size())
        {
            cout << arr1[i] << " ";
            i++;
        }
        else if (arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            cout << arr2[j] << " ";
            j++;
        }
        else if (arr1[i] == arr2[j])
        {
            cout << arr1[i];
            cout << arr2[j];
            i++;
            j++;
        }
    }
}