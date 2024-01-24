#include <iostream>
#include <cstring>
#include<algorithm>
#include <vector>
using namespace std;
int main()
{
    string s ;
    cout<<"Enter the string : ";
    cin>>s;
    char arr[10];
    strcpy(arr, s.c_str());
    sort(arr, arr +strlen(arr));
    for (size_t i = 0; i < strlen(arr); i++)
    {
        cout<<arr[i]<<" ";
    }

}