#include <iostream>
#include <vector>
using namespace std;

int sec_large(vector<int> arr)
{
    int i, max, max2;
    max = arr[0];
    for (i = 1; i < arr.size(); i++)
    {

        if (max < arr[i])
        {
            max2 = max;
            max = arr[i];
        }
    }
    return max2;
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
    cout << "2nd Largest Element is :";
    cout << sec_large(arr);
}