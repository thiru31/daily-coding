#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    vector<string> arr(size);
    cout << "Enter the Strings of the array : ";
    for (string &ele : arr)
    {
        cin >> ele;
    }
    // string arr[] = {"zeb ","flower", "flight", "flask"};
    // int size = sizeof(arr) / sizeof(arr[0]);
    sort(begin(arr), end(arr));
    for (string &ele : arr)
    {
        cout << ele << " ";
    }
}
