#include <bits/stdc++.h>
using namespace std;

int prodarr(vector<int> &arr)
{
    int size = arr.size();
    int pre = 1;
    int ans = INT_MIN;
    int suff = 1;
    for (int i = 0; i < size; i++)
    {
        if (pre == 0)
        {
            pre = 1;
        }
        if (suff == 0)
        {
            suff = 1;
        }
        pre *= arr[i];
        suff *= arr[size - 1 - i];
        ans = max(ans, max(pre, suff));
    }
        return ans;
}

int main()
{
    vector<int> arr{1, 2, -3, 0, -4, -5};
    cout<<prodarr(arr);
}