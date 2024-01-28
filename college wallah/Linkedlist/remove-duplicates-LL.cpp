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
    void print()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "-->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void remove_dup()
    {
        node *curr = head;
        node *temp = curr->next;
        while (curr != NULL && curr->next != NULL)
        {
            if (curr->val == temp->val)
            {
                curr->next = curr->next->next;
                free(temp);
                temp = curr->next;
            }
            else
            {
                curr=curr->next;
                temp=temp->next;
            }
        }
    }
};

int main()
{
    linkedlist ll;
    ll.insert(10);
    ll.insert(10);
    ll.insert(20);
    ll.insert(20);
    ll.insert(20);
    ll.insert(20);
    ll.insert(20);
    ll.insert(30);
    ll.insert(30);
    ll.insert(30);
    ll.insert(30);
    ll.insert(30);
    // ll.insert(30);
    // ll.insert(40);
    // ll.insert(40);
    // ll.insert(50);
    // ll.insert(50);
    // ll.insert(50);
    // ll.insert(50);
    ll.print();
    ll.remove_dup();
    ll.print();
}