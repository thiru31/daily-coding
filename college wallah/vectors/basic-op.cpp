#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int size, key;
    // cout << "Enter size of the array :";
    // cin >> size;
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(5);
    arr.push_back(1);
    arr.push_back(23540);
    arr.push_back(23540);
    arr.push_back(23540);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(0);
    // arr.insert(arr.end()-2,100);
    arr.insert(arr.begin() + 1, 100);
    arr.insert(arr.end() - 1, 100);
    arr.pop_back();
    cout << arr.capacity() << endl;
    for (int &ele : arr)
    {
        cout << ele << " ";
    }
}
