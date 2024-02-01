#include <iostream>
using namespace std;

class Stack
{
    int top;
    int capacity;
    int *arr;

public:
    Stack(int n)
    {
        this->capacity = n;
        this->top = -1;
        arr = new int[n];
    }

    void push(int n)
    {
        if (this->top == capacity - 1)
        {
            cout << "overflow";
            return;
        }
        else
        {
            this->top++;
            this->arr[this->top] = n;
        }
    }

    void pop()
    {
        if (this->top == -1)
        {
            cout << "underflow";
            return;
        }
        this->arr[this->top] = 0;
        this->top--;
    }
    int gettop()
    {
        if (this->top == -1)
        {
            cout << "underflow";
            return 0;
        }
        return this->arr[this->top];
    }

    void display()
    {
        if (this->top == -1)
        {
            cout << "Stack is empty";
            return;
        }
        for (size_t i = 0; i <= top; i++)
        {
            cout << arr[i] << " | ";
        }
    }
};

int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.display();
    st.pop();
    cout << endl;
    st.display();
    cout << endl;
    int a = st.gettop();
    cout<<a;
}