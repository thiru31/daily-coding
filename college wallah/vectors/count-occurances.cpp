#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size, key;
    cout << "Enter size of the array :";
    cin >> size;
    cout << "key: ";
    cin >> key;
    cout << "Enter " << size << " elements of the array :";
    vector<int> arr(size);
    for (int &ip : arr)
    {
        cin >> ip;
    }
    int count = 0;
    // for (int i = 0; i < arr.size(); i++)
    for (int ele : arr)
    {
        if (ele == key)
        {
            count++;
        }
    }
    cout << "count :" << count;
}