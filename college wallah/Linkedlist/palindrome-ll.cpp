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

void compare(node *head, node *prev)
{
    int flag = 1;
    while (head && prev)
    {
        if (head->val == prev->val)
        {
            head = head->next;
            prev = prev->next;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    (flag) ? cout << "Palindrome" : cout << "Not palindrome";
}
int main()
{
    Linkedlist ll;
    // ll.insert(10);
    ll.insert(20);
    ll.insert(30);
    ll.insert(40);
    ll.insert(30);
    // ll.insert(30);
    ll.insert(20);
    ll.insert(10);
    ll.display();
    node *last = break_reverse(ll.head, ll.middle());
    compare(ll.head, last);
}