#include <iostream>
#include <vector>
using namespace std;

void print_sum(vector<int> &arr)
{
    int sum = 0, start, end;
    cout << "Enter start index (1-based indexing):";
    cin >> start;
    cout << "Enter end index (1-based indexing) :";
    cin >> end;
    for (int i = start - 1; i < end; i++)
    {
        sum += arr[i];
    }
    cout << "The sum of the range specified is : " << sum<<endl;
}

int main()
{
    // vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size, queries;
    cout << "Enter the size of array :";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the array elements :";
    for (int &ele : arr)
    {
        cin >> ele;
    }
    cout << "Enter the Number of Queries :";
    cin >> queries;
    while (queries--)
    {
        print_sum(arr);
    }
}