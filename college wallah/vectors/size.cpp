#include<iostream>
#include<vector>
#include<array>
using namespace std;
int main()
{
    vector <int> num(10);
    array <int,6> arr;
    int arrr[5];
    int a=num.size();
    int a1=arr.size();
    int b=end(arrr)-begin(arrr);
    cout<<a<<endl;
    cout<<a1<<endl;
    cout<<b;
}