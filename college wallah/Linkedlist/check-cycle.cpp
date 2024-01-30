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
        node *temp = head;
        if (head == NULL)
        {
            head = newnode;
            newnode->next = NULL;
            return;
        }
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
    bool cycle()
    {
        if (!head)
        {
            return false;
        }
        node *ptr1 = head;
        node *ptr2 = head;
        while (ptr2 && ptr2->next)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next->next;
            if (ptr1 == ptr2)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Linkedlist ll;
    ll.insert(2);
    ll.insert(4);
    ll.insert(6);
    ll.display();
    ll.head->next->next->next = ll.head->next;
    cout << ll.cycle();
}