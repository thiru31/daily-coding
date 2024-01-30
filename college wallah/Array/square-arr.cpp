#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void return_square(vector<int> &arr)
{
    for(int &ele:arr)
    {
        ele=pow(ele,2);
        // ele*=ele;
        //Another logic for squares
    }
    // sort(arr.begin(),arr.end(),greater<int>());
    //above line sorts in descending order
    sort(arr.begin(),arr.end(),less<int>());
    for (int &ele : arr)
        cout << ele << " ";
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
    cout << "Squares of the array elements :";
    return_square(arr);
}