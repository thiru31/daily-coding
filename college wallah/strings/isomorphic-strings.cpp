#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter  string 1 :";
    cin >> str1;
    cout << "Enter  string 2 :";
    cin >> str2;
    string rs1 = "";
    string rs2 = "";
    for (int i = 0; i < str1.size(); i++)
    {
        int count = 0;
        while (i < str1.size())
        {
            if (str1[i] == str1[i + 1])
            {
                count++;
                i++;
            }
            else
            {
                break;
            }
        }
        rs1 += to_string(count);
    }
    for (int i = 0; i < str2.size(); i++)
    {
        int count = 0;
        while (i < str2.size())
        {
            if (str2[i] == str2[i + 1])
            {
                count++;
                i++;
            }
            else
            {
                break;
            }
        }
        rs2 += to_string(count);
    }
    if (rs1 == rs2)
    {
        cout << "Isomorphic";
    }
    else
        cout << "Not Isomorphic";
}
