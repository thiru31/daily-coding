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
    int gettop()
    {
        if (this->top == -1)
        {
            cout << "underflow" << endl;
            return -1;
        }
        return this->arr[this->top];
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
    bool isFull()
    {
        if (this->top == capacity-1)
        {
            return true;
        }
        else
            return false;

    }
    void size()
    {
        cout << top + 1;
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
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    st.display();
}
