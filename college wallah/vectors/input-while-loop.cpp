#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> num(size);

    int i=0;
    while (i<num.size())
    {
        cin >> num[i++];
    }

    int ip = 0;
    while (ip < num.size())

    {

        cout << num[ip++] << " ";
    }
    cout<<endl;
    cout << "size : " << num.size();
    cout << "capacity : " << num.capacity();
}