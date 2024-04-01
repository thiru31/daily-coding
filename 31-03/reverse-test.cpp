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

class LinkedList
{
public:
    node *head;
    LinkedList()
    {
        head = NULL;
    }
    void insert(int val)
    {
        node *newnode = new node(val);
        node *temp = head;
        if (temp == NULL)
        {
            head = newnode;
            return;
        }
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
};

node *reverse(node *head)
{
    node *prev = NULL;
    node *curr = head;
    while (curr)
    {
        node *after = curr->next;
        curr->next = prev;
        prev = curr;
        curr = after;
    }
    return prev;
}

node *reverserecurrsion(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *temp = head;
    node *newhead = reverserecurrsion(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}
int main()
{
    LinkedList ll;
    ll.insert(10);
    ll.insert(20);
    ll.insert(30);
    ll.insert(30);
    ll.insert(30);
    ll.display();
    ll.head = reverserecurrsion(ll.head);
    ll.display();
}