#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(3);
    st.push(5);
    st.push(6);
    st.push(8);
    // int a = st.top();
    st.pop();
    int a = st.top();
    // cout << a;
    // cout << st.size();

    while (st.size() > 0)
    {
        cout << st.top();
        st.pop();
    }
}