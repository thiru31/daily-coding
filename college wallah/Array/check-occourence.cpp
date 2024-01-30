#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{

    int size, q;
    cout << "Enter the size of array :";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the array elements :";
    for (int &ele : arr)
    {
        cin >> ele;
    }
    vector<int> freqarr(pow(10, 5), 0);
    for (int i = 0; i < size; i++)
    {
        freqarr[arr[i]]++;
    }

    cout << "Enter the Number of queries : ";
    cin >> q;
    vector<int> queries(q);
    while (q--)
    {
        int q_ele;
        cout << "Enter the query element :";
        cin >> q_ele;
        cout << "occurence: " << freqarr[q_ele] << endl;
    }
}