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
class linkedlist
{
public:
    node *head;
    linkedlist()
    {
        head = NULL;
    }
    void insert(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = newnode;
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
        while (temp != NULL)
        {
            cout << temp->val << "-->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void reverse_ll(node *head)
    {
        // base
        if (head == NULL)
        {
            return;
        }
        reverse_ll(head->next);
        cout << head->val << "-->";
    }
};
int main()
{
    node *head;
    linkedlist ll;
    ll.insert(5);
    ll.insert(4);
    ll.insert(3);
    ll.insert(2);
    ll.insert(1);
    ll.display();
    ll.reverse_ll(ll.head);
    cout << "NULL" << endl;
}