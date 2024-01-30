#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> arr)
{
    int j = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 1)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
        for (int &ele : arr)
            cout << ele << " ";
        // cout << endl;
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
}