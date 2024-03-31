#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node(int data)
    {
        val = data;
        next = NULL;
    }
};
class LL
{
public:
    node *head;
    LL()
    {
        head = NULL;
    }
    void insertfront(int val)
    {
        node *newnode = new node(val);
        newnode->next = head;
        head = newnode;
    }
    void display()
    {
        node *temp = head;
        while (temp)
        {
            cout<<temp->val<<"-->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main()
{
    LL ll;
    ll.insertfront(3);
    ll.insertfront(5);
    ll.insertfront(6);
    ll.display();
}
