#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveindex(vector<int> &arr);

int main()
{
    // vector<int> arr = {1, 2, 3, 4, 5, 6};
    int size;
    cout << "Enter the size of array :";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the array elements :";
    for (int &ele : arr)
    {
        cin >> ele;
    }
    moveindex(arr);
}

void moveindex(vector<int> &arr)
{
    int j = 0;
    for (int i = 0; i < arr.size(); i += 2)

    {
        {
            swap(arr[i], arr[j++]);
        }
    }
    sort(arr.begin() + (arr.size() / 2), arr.end());
    for (int &ele : arr)
        cout << ele << " ";
}