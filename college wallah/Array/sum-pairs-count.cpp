#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size, tsum;
    cout << "Enter the size of array :";
    cin >> size;
    cout << "Enter the target sum :";
    cin >> tsum;
    vector<int> arr(size);
    cout << "Enter the array elements :";
    for (int &ele : arr)
    {
        cin >> ele;
    }
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int a = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (a + arr[j] == tsum)
            {
                count++;
            }
        }
    }
    cout << "count of pairs with the targetsum is :" << count;
}