#include <iostream>
#include <vector>
using namespace std;

void print_sum(vector<int> &prefix_sum)
{
    int sum, start, end;
    cout << "Enter start index (1-based indexing):";
    cin >> start;
    cout << "Enter end index (1-based indexing) :";
    cin >> end;
    if (start == 1)
    {
        sum = prefix_sum[end - 1];
    }
    else
    {
        sum = prefix_sum[end - 1] - prefix_sum[start - 2];
    }
    cout << "Sum of the range is : " << sum << endl;
}

int main()
{
    int size, queries;
    cout << "Enter the size of array :";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the array elements :";
    for (int &ele : arr)
    {
        cin >> ele;
    }

    // vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 1; i < size; i++)
    {
        arr[i] += arr[i - 1];
    }
    for (int &ele : arr)
        cout << ele << " ";
    cout << "Enter the Number of Queries :";
    cin >> queries;
    while (queries--)
    {
        print_sum(arr);
    }
}