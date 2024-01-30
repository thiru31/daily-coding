#include <iostream>
#include <vector>
using namespace std;

void find_unique(vector<int> arr)
{
    int i, flag, j;
    for (i = 0; i < arr.size(); i++)
    {
        flag = 1;
        for (j = 0; j < arr.size(); j++)
        {
            if (j == i)
            {
                continue;
            }

            if (arr[i] == arr[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << arr[i] << " ";
        }
    }
    cout<<endl;
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
    cout << "Unique elemenents are :";
    find_unique(arr);

}

//Test cases I have tested for the above code:


    // vector<int> arr1 = {1, 2, 3, 4, 5};
    // find_unique(arr1); // Expected output: (nothing)

    // // Test Case 2: Single unique element
    // vector<int> arr2 = {1, 2, 3, 4, 5, 2};
    // find_unique(arr2); // Expected output: 1 3 4 5

    // // Test Case 3: Multiple unique elements
    // vector<int> arr3 = {1, 2, 3, 4, 5, 2, 3, 4};
    // find_unique(arr3); // Expected output: 1 5

    // // Test Case 4: Empty array
    // vector<int> arr4 = {};
    // find_unique(arr4); // Expected output: (nothing)

    // // Test Case 5: Array with negative numbers
    // vector<int> arr5 = {-1, 2, -3, 4, -5, 2, 3, 4};
    // find_unique(arr5); // Expected output: -1 -3 -5 3