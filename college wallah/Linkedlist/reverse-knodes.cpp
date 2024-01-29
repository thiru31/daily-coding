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
        node *temp = head;
        node *newnode = new node(val);
        if (temp == NULL)
        {
            head = newnode;
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
};

node *reverse_k_nodes(node *&head, int k)
{
    node *prev = NULL;
    node *curr = head;
    int count = 0;
    while (curr != NULL && count < k)
    {
        node *after = curr->next;
        curr->next = prev;
        prev = curr;
        curr = after;
        count++;
    }
    if (curr != NULL)
    {
        node *newhead = reverse_k_nodes(curr, k);
        head->next = newhead;
    }
    return prev;
}

int main()
{
    int k;
    cout << "Enter the Number of nodes to be reversed at a time :";
    cin >> k;
    linkedlist ll;
    ll.insert(10);
    ll.insert(20);
    ll.insert(30);
    ll.insert(40);
    ll.insert(50);
    ll.insert(60);
    ll.insert(70);
    ll.insert(80);
    ll.insert(90);
    ll.insert(900);
    ll.insert(99);
    ll.display();
    ll.head = reverse_k_nodes(ll.head, k);
    ll.display();
}