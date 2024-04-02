#include <bits/stdc++.h>
using namespace std;

void move(vector<int> &arr, int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    move(arr, size);
    for (int &ele : arr)
    {
        cout << ele << " ";
    }
}