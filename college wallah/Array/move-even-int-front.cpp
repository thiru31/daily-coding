#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveintegers(vector<int> &arr)
{
    int i = 0, j = arr.size() - 1;
    while (i < j)
    {
        if (arr[i] % 2 == 1 && arr[j] % 2 == 0)
        {
            swap(arr[i++], arr[j--]);
        }
        if (arr[i] % 2 == 0)
        {
            i++;
        }
        if (arr[j] % 2 == 1)
        {
            j--;
        }
    }
}

int main()
{
    // vector<int> arr = {1, 2, 3, 4, 5};
    int size;
    cout << "Enter the size of array :";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the array elements :";
    for (int &ele : arr)
    {
        cin >> ele;
    }
    moveintegers(arr);
    cout << "Result :";
    for (int &ele : arr)
    {
        cout << ele << " ";
    }
}
