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
void insertfirst(node *&head, int val)
{
    node *newnode = new node(val);
    newnode->next = head;
    head = newnode;
}
void display(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void insertatk(node *&head, int val, int k)
{
    node *newnode = new node(val);
    int cur_pos = 0;
    node *temp = head;
    while (cur_pos < k - 2)
    {
        temp = temp->next;
        cur_pos++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void insertatend(node *head, int val)
{
    node *newnode = new node(val);
    node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

int main()
{
    node *head = NULL;
    insertfirst(head, 1);
    insertfirst(head, 2);
    insertfirst(head, 3);
    insertfirst(head, 4);
    insertfirst(head, 5);
    insertatend(head, 200);
    insertatk(head, 100, 2);
    display(head);
}