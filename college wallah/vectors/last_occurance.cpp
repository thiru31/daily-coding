#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size, key;
    cin >> size;
    cout << "key: ";
    cin >> key;
    vector<int> arr(size);
    for (int &ip : arr)
    {
        cin >> ip;
    }
    int j = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
            j = i;
        }
    }
    cout << j;
}