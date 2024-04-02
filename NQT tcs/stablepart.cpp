#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int &ele : arr)
    {
        cin >> ele;
    }
    stable_partition(arr.begin(), arr.end(), [&](int n)
                     { return n != 0; });
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}