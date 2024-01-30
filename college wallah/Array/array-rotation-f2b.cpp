#include <iostream>
#include <vector>
using namespace std;

void rotation(vector<int> arr, int steps)
{
    for (int i = steps; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < steps; i++)
    {
        cout << arr[i] << " ";
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
    rotation(arr, steps);
}