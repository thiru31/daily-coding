#include <iostream>

using namespace std;

class stack
{
    int capacity;
    int top;
    int *arr;

public:
    stack(int c)
    {
        arr = new int[c];
        this->top = -1;
        this->capacity = c;
    }
    void push(int val)
    {
        if (this->top == this->capacity - 1)
        {
            cout << "overflow";
            return;
        }
        else
        {
            this->top++;
            this->arr[this->top] = val;
        }
    }
    void pop()
    {
        if (this->top == - 1)
        {
            cout << "underflow";
            return;
        }
        else
        {
            this->top--;
            // this->arr[this->top] = val;
        }
    }
    void display()
    {
        for (int i=0;i<=top;i++)
            cout << arr[i]<< " | ";
    }
};
int main()
{
    stack st(5);
    st.push(3);
    st.push(5);
    st.pop();
    st.display();
}