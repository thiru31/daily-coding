#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 1, 2, 3, 4, 5, 5, 6};
    int size = arr.size();
    // vector to set
    set<int> s(arr.begin(), arr.end());
    // set to vector
    arr.assign(s.begin(), s.end());

    for (int ele : arr)
        cout << ele;
}