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
    }
    void display()
    {
        node *temp = head;
        while (temp)
        {
            cout << temp->val << "--";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    node *reverse(node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        node *temp = head;
        node *newhead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;

        return newhead;
    }
};

int main()
{
    Linkedlist ll;
    ll.insert(10);
    ll.insert(20);
    ll.insert(30);
    ll.insert(40);
    ll.display();
    ll.head = ll.reverse(ll.head);
    ll.display();
}