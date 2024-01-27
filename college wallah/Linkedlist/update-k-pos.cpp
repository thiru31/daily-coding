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
void update_at_pos(node *&head, int new_val, int pos)
{
    node *temp = head;
    int init_pos = 0;
    while (init_pos < pos)
    {
        temp = temp->next;
        init_pos++;
    }
    temp->val = new_val;
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
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    display(head);
    update_at_pos(head, 8800, 1);
    display(head);
}