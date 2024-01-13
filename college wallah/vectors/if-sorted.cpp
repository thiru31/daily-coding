#include <iostream>
#include <vector>
using namespace std;

void ifsorted(vector<int> arr)
{
    int flag = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] > arr[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Not sorted";
    }
    else
    {
        cout << "sorted";
    }
}

int main()
{
    int size, key;
    cout << "Enter size of the array :";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter " << size << " elements of the array :";
    for (int &ele : arr)
    {
        cin >> ele;
    }
    ifsorted(arr);
}