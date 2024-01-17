#include <iostream>
using namespace std;

class stack
{
    int top;
    int capacity;
    int *arr;

public:
    stack(int c)
    {
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }
    void push(int val)
    {
        if (this->top == this->capacity - 1)
        {
            cout << "overflow" << endl;
            return;
        }
        else
        {
            top++;
            this->arr[this->top] = val;
        }
    }
    void pop()
    {
        if (this->top == -1)
        {
            cout << "underflow" << endl;
            return;
        }
        else
        {
            this->arr[this->top] = 0;
            top--;
        }
    }

    bool isEmpty()
    {
        if (this->top == -1)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    int i;
    string str;
    str = "{{{{}}}}";
    stack st(str.size());
    for (i = 0; i < str.size(); i++)
    {
        if (str[i] == '{')
        {
            st.push('{');
        }
        else if (str[i] == '}')
        {
            st.pop();
        }
    }
    if (st.isEmpty())
    {
        cout << "Matching ";
    }
    else
    {
        cout << "Not Matching ";
    }
}
