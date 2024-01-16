#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    string arr[] = {"flower", "flight", "flask"};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, flag = 1;
    int k = 0;
    for (int j = 0; j <= arr[0].size(); j++)
    {
        i = 0;
        while (i < size - 1)
        {
            if (arr[i][j] == arr[i + 1][j])
            {
                i++;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            k = j;
            break;
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << arr[0][i];
    }
}
