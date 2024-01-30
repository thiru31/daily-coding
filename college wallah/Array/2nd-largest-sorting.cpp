#include <iostream>
#include <vector>
#include<algorithm>
// #include <bits/stdc++.h>
using namespace std;

int sec_large(vector<int> arr)
{
    int change=-1;
    sort(arr.begin(), arr.end());
    int max = arr[arr.size() - 1];
    replace(arr.begin(),arr.end(),max,change);
    sort(arr.begin(), arr.end());
    int res=arr[arr.size()-1];
    return res;
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