#include <iostream>
#include <vector>
using namespace std;

void check_partition(vector<int> &arr)
{

    int i = 0, j = arr.size() - 1;
    int sum1 = arr[i], sum2 = arr[j];
    while (i < j)
    {
        if (sum1 == sum2)
        {
            i++;
            j--;
        }
        while (sum1 < sum2)
        {
            i++;
            sum1 += arr[i];
            // cout << sum1;
        }
        while (sum1 > sum2)
        {
            j--;
            sum2 += arr[j];
            // cout << sum2;
        }
    }
    if (sum1 == sum2)
    {
        cout << "Partition possible at index " << i << " & " << j << endl;

        cout << "sub array 1 : ";
        for (int itr = 0; itr < i; itr++)
        {
            cout << arr[itr] << " ";
        }
        cout << endl;
        cout << "sum of sub-array 1 : " << sum1;
        cout << endl;
        cout << "sub array 2 : ";
        for (int itr = j + 1; itr < arr.size(); itr++)
        {
            cout << arr[itr] << " ";
        }
        cout << endl;
        cout << "sum of sub-array 2 : " << sum2;
    }
    else
    {
        cout << "Partition Not possible";
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
    // vector<int> arr = {1, 2, 3, 1, 3, 4};
    check_partition(arr);
}