#include <iostream>
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

class Linkedlist
{
public:
    node *head;
    Linkedlist()
    {
        head = NULL;
    }
    void insert(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = newnode;
            newnode->next = NULL;
            return;
        }
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = NULL;
    }
    void display()
    {
        node *temp = head;
        while (temp)
        {
            cout << temp->val << "-->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

node *reverse(node *head)
{
    if (head->next == NULL)
    {
        return head;
    }
    node *newhead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

int main()
{
    Linkedlist ll;
    ll.insert(4);
    ll.insert(3);
    ll.insert(2);
    ll.insert(1);
    ll.display();
    ll.head = reverse(ll.head);
    ll.display();
}