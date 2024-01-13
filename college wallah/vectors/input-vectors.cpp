#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num;
    for (int i = 0; i < 5; i++)
    {
        int ip;
        cin >> ip;
        num.push_back(ip);
    }
    for (int i = 0; i < num.size(); i++)
    {

        cout << num[i] << " ";
    }
    cout << endl;
    for (int ele : num)
    {
        cout << ele << " ";
    }
    cout << endl;

    int i = 0;
    while (i < num.size())

    {

        cout << num[i++] << " ";
    }
    cout << endl;
    cout << num.size() << endl;
    num.resize(15);
    cout << num.capacity();
}