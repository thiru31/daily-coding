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

    node *middle()
    {
        node *ptr1 = head;
        node *ptr2 = head;
        while (ptr2 && ptr2->next)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next->next;
        }
        return ptr1;
    }
};

node *break_reverse(node *head1, node *ptr1)
{
    node *curr = ptr1->next;
    ptr1->next = NULL;
    node *prev = NULL;
    while (curr)
    {
        node *after = curr->next;
        curr->next = prev;
        prev = curr;
        curr = after;
    }
    return prev;
}
void merege_ll(node *head1, node *head2)
{
    // node *newhead = head1;
    while (head1 != head2 && head2 && head1)
    {
        node *temp = head1->next;
        head1->next = head2;
        head2 = temp;
        head1 = head1->next;
    }

    // return newhead;
}

int main()
{
    Linkedlist ll;
    ll.insert(10);
    ll.insert(20);
    ll.insert(30);
    ll.insert(40);
    ll.insert(50);
    ll.insert(60);
    ll.insert(70);
    ll.display();
    node *head2 = break_reverse(ll.head, ll.middle());
    merege_ll(ll.head, head2);
    ll.display();
}