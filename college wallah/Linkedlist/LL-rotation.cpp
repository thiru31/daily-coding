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
        while (temp)
        {
            cout << temp->val << "-->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    node *rotate(int k)
    {
        node *ptr1 = head;
        node *ptr2 = head;
        int count = 0;
        while (count < k)
        {
            ptr2 = ptr2->next;
            count++;
        }
        while (ptr2->next != NULL)
        {
            ptr2 = ptr2->next;
            ptr1 = ptr1->next;
        }
        node *newhead = ptr1->next;
        ptr1->next = NULL;
        ptr2->next = head;
        return newhead;
    }
};

int main()
{
    Linkedlist ll;
    ll.insert(5);
    ll.insert(6);
    ll.insert(7);
    ll.insert(8);
    ll.insert(9);
    ll.insert(10);
    ll.display();
    int k = 3;
    ll.head = ll.rotate(k);
    ll.display();
}