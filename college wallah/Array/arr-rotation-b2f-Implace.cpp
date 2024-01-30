#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotation(vector<int> arr, int steps)
{
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin()+steps);
    reverse(arr.begin()+steps, arr.end());
    for (auto &&i : arr)
    {
        cout << i << " ";
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
    int steps;
    cout << "Enter the Number of steps for rotation :";
    cin >> steps;
    steps = steps % arr.size();
    rotation(arr, steps);
}