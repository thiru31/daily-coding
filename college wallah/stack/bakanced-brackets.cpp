#include <iostream>
#include <stack>
using namespace std;

int matching(char a, char b)
{
    if (a == '(' && b == ')')
        return 1;
    else if (a == '{' && b == '}')
        return 1;
    else if (a == '[' && b == ']')
        return 1;
    else
        return 0;
}

int main()
{
    stack<int> st;
    int flag = 1;
    // string str = "[{}]";
    string str;
    cout << "Enter the brakets : ";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            st.push(str[i]);
        }
        else if (!matching(st.top(), str[i]) || st.empty())
        {
            cout << "Not balanced";
            flag=0;
            break;
        }
        else
            st.pop();
    }
    if (flag == 1)
        cout << "balanced";
}