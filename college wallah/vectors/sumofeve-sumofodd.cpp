
#include <iostream>
#include <vector>
using namespace std;

int sumofeve(vector<int> arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i += 2)
    {
        sum += arr[i];
    }
    return sum;
}
int sumofodd(vector<int> arr)
{
    int sum = 0;
    for (int i = 1; i < arr.size(); i += 2)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size, key;
    cout << "Enter size of the array :";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter " << size << " elements of the array :";
    for (int &ele : arr)
    {
        cin >> ele;
    }
    int sum_eve=sumofeve(arr);
    int sum_odd=sumofodd(arr);
    // cout<<sum_eve<<" "<<sum_odd<<endl;
    cout<< " Diffence btw sum of even index and odd index is :"<<sum_eve-sum_odd;
}