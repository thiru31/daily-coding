#include <iostream>
#include <vector>
using namespace std;

void spiral(vector<vector<int>> &vec)
{
    int top = 0;
    int bottom = vec.size() - 1;
    int left = 0;
    int right = vec[0].size() - 1;
    int direction = 0;

    while (top <= bottom && left <= right)
    {
        if (direction == 0)
        {
            for (int i = left; i <= right; i++)
            {
                cout << vec[top][i];
            }
            top++;
        }
        else if (direction == 1)
        {
            for (int j = top; j <= bottom; j++)
            {
                cout << vec[j][right];
            }
            right--;
        }
       else  if (direction == 2)
        {
            for (int i = right; i >= left; i--)
            {
                cout << vec[bottom][i];
            }
            bottom--;
        }
      else if (direction==3)
        {
            for (int j = bottom; j >= top; j--)
            {
                cout << vec[j][left];
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
}

int main()
{
    int m, n;
    cout<<"Enter the number of rows : ";
    cin >> m;
    cout<<"Enter the number of columns : ";
    cin >> n;

    vector<vector<int>> vec(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << vec[i][j];
    //     }
    //     cout << endl;
    // }
    spiral(vec);
}
