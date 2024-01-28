#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, j = 0;
    cin >> s;
    int a[s];
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }
}