#include <iostream>
#include <vector>
using namespace std;

void find_unique(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1;
            }
        }
        for(int &ele:arr)
        {
            if(ele!=-1)
            cout<<ele<<" ";
        }
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
