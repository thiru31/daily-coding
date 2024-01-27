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

void insertatfront(node *&head, int val)
{
    node *newnode = new node(val);
    newnode->next = head;
    head = newnode;
}

void insertatend(node *&head, int val)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node *newnode = new node(val);
    temp->next = newnode;
    newnode->next = NULL;
}

void insertatpos(node *head, int val, int pos)
{
    node *newnode = new node(val);
    int init_pos = 0;
    node *temp = head;
    while (init_pos < pos - 1)
    {
        temp = temp->next;
        init_pos++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
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

int main()
{
    node *head = NULL;
    insertatfront(head, 10);
    insertatfront(head, 100);
    display(head);
    insertatend(head, 20);
    insertatend(head, 40);
    display(head);
    insertatpos(head, 2000, 2);
    insertatpos(head, 3000, 1);
    display(head);
}