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
        // int a = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
                if (arr[i] + arr[k] + arr[j] == tsum)
                {
                    count++;
                }
        }
    }
    cout << "number of triplet pairs with target sum is: " << count;
}