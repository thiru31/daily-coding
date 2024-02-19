#include <bits/stdc++.h>
using namespace std;

void mvz(vector<int> &arr)
{
    std::stable_partition(arr.begin(), arr.end(), [](int n)
                          { return n != 0; });
}

int main()
{
    int size;
    cout<<"Enter the size of the array :";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    mvz(arr);
    for (int &ele : arr)
    {
        cout << ele << " ";
    }
}