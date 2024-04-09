#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the sumber of elements: ";
    cin >> n;

    vector<int> arr(n);
    for (auto &ele : arr)
    {
        cin >> ele;
    }

    map<int, int> sum;
    for (auto &ele : arr)
    {
        if (sum.find(ele) == sum.end())
        {
            sum[ele] = ele;
        }
        else
        {

            sum[ele] = sum[ele] + ele;
        }
    }

    for (auto &ele : sum)
    {
        cout << ele.first << "--" << ele.second << endl;
    }
}