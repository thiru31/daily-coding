#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> num;
    for (int i = 0; i < 5; i++)
    {
        int ip;
        cin>>ip;
        num.push_back(ip);
    }
    for (int i = 0; i < num.size(); i++)
    {

        cout<<num[i]<<" ";

    }
    cout<<num.size()<<endl;
    num.resize(15);
    cout<<num.capacity();




}