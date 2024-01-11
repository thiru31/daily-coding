#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the decimal number :";
    cin>>n;
    string str="";
    while (n>0)
    {
        if (n%2==0)
        {
            str+='0';
        }
        else
        {
            str+='1';
        }
        n/=2;
    }
    string bin= string(str.rbegin(),str.rend());
    cout<<bin;

}