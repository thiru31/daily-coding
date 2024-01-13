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
    int count = 0;
    for (int &num : arr)
    {
        cin >> num;
        if (num > key)
        {
            count++;
        }
    }
    cout << "count of number strictly greater :" << count;
}