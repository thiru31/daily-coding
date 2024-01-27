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
    }
};

void insert(node *&head, int val)
{
    node *newnode = new node(val);
    newnode->next = head;
    head = newnode;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void delete_at_k(node *&head, int pos)
{
    node *temp = head;
    int init_pos = 0;
    while (init_pos < pos - 1)
    {
        temp = temp->next;
        init_pos++;
    }
    node *rnode = temp;
    temp = temp->next;
    rnode->next=temp->next;

}

int main()
{
    node *head = NULL;
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    insert(head, 50);
    display(head);
    delete_at_k(head, 4);
    display(head);
}