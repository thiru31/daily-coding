#include <iostream>
#include <vector>
using namespace std;

int maz_seq_1(string ip, int k)
{
    int start = 0, end = 0, zc = 0, max_len = 0;
    for (int end = 0; end < ip.length(); end++)
    {

        if (ip[end] == '0')
        {
            zc++;
        }

        while (zc > k)
        {
            if (ip[start] == '0')
            {
                zc--;
                start++;
            }
        }

        max_len = max(max_len, end - start + 1);
    }
    return max_len;
}

int main()
{
    string ip = "00010101111";
    int k = 2;
    cout << "The max number of 1s is : " << maz_seq_1(ip, k);
}