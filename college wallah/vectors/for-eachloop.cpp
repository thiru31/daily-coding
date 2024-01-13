#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num(3);
    for (int &ip : num)
    {
        cin >> ip;
        // num.push_back(ip);
    }
    for (int ip : num)
    {
        cout << ip << " ";
    }
    cout << endl;
    cout << num.size() << endl;
    // cout << num.capacity() << endl;
}