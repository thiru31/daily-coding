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
        int n = 0;
        while (ptr1->next)
        {
            n++;
            ptr1 = ptr1->next;
        }
        n++; // lastnode
        k = k % n;
        ptr1->next = head;
        for (size_t i = 0; i < n - k; i++)
        {
            ptr1 = ptr1->next;
        }
        node *newhead = ptr1->next;
        ptr1->next = NULL;
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
    int k;
    cout << "Enter the value of k :";
    cin >> k;
    ll.head = ll.rotate(k);
    ll.display();
}