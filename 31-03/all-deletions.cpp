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
    void Insert(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void display()
    {
        node *temp = head;
        while (temp)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void delatfirst()
    {
        node *temp = head;
        head = head->next;
        free(temp);
    }
    void delatlast()
    {
        node *temp = head;
        while (temp->next->next)
        {
            temp = temp->next;
        }
        node *dnode = temp->next;
        temp->next = NULL;
        free(dnode);
    }
    void delatk(int k)
    {
        node *temp = head;
        int count = 1;
        while (count < k-1 )
        {
            temp = temp->next;
            count++;
        }
        node *dnode = temp->next;
        temp->next = dnode->next;
        free(dnode);
    }
};

int main()
{
    Linkedlist ll;
    ll.Insert(5);
    ll.Insert(4);
    ll.Insert(3);
    ll.Insert(2);
    ll.Insert(1);
    ll.display();
    ll.delatfirst();
    ll.display();
    ll.delatlast();
    ll.display();
    ll.delatk(2);
    ll.display();
}