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
    node *cycle()
    {
        if (!head)
        {
            return NULL;
        }
        node *ptr1 = head;
        node *ptr2 = head;
        while (ptr2 && ptr2->next)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next->next;
            if (ptr1 == ptr2)
            {
                return ptr1;
            }
        }
        return head;
    }
};

int main()
{
    Linkedlist ll;
    ll.insert(2);
    ll.insert(4);
    ll.insert(6);
    ll.head->next->next->next = ll.head->next;
    node *ptr1 = ll.cycle();
    node *check = ll.head;
    while (ptr1->next != check->next)
    {
        ptr1 = ptr1->next;
        check = check->next;
    }
    ptr1->next = NULL;
    ll.display();
}