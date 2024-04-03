#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr{{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    vector<int> sumarr;
    for (vector<int> ele : arr)
    {
        int sum = 0;
        sum = accumulate(ele.begin(), ele.end(), sum);
        sumarr.push_back(sum);
    }
    for (int &ele : sumarr)
    {
        cout << ele << " ";
    }
}