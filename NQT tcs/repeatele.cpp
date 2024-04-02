#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1, 1, 2, 3, 4, 4, 5, 2};
    int size = arr.size();
    int c= *max_element(arr.begin(),arr.end());
    vector<int> freq(c+1, 0);
    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }
    //Repeated Elements
    cout<<"Repeated elements :";
    for (int i = 0; i < size; i++)
    {
        if (freq[i] > 1)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    cout<<"Unique elements :";
    for (int i = 0; i < size; i++)
    {
        if (freq[i] == 1)
        {
            cout << i << " ";
        }
    }

}