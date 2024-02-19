

#include <bits/stdc++.h>
using namespace std;

void printSubStr(string str, int low, int high)
{
    for (int i = low; i <= high; ++i)
        cout << str[i];
}

int longestPalSubstr(string s)
{
    int n = s.length();
    int start = 0, end = 1;
    int low, hi;

    for (int i = 0; i < n; i++)
    {

        low = i - 1;
        hi = i;

        while (low >= 0 && hi < n && s[low] == s[hi])
        {

            if (hi - low + 1 > end)
            {
                start = low;
                end = hi - low + 1;
            }
            low--;
            hi++;
        }

        low = i - 1;
        hi = i + 1;

        while (low >= 0 && hi < n && s[low] == s[hi])
        {

            if (hi - low + 1 > end)
            {
                start = low;
                end = hi - low + 1;
            }
            low--;
            hi++;
        }
    }

    cout << "Longest palindrome substring is: ";
    printSubStr(s, start, start + end - 1);

    return end;
}

int main()
{
    string str = "cdzazab";

    longestPalSubstr(str);
    return 0;
}
