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

void insert(node *&head, int val)
{
    node *temp = head;
    node *newnode = new node(val);
    newnode->next = head;
    head = newnode;
}
void inser_back(node *&head, int val)
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
void delete_node(node *&head, int pos)

{
    node *temp = head;
    int init_pos = 0;
    while (init_pos < pos - 1)
    {
        temp = temp->next;
        init_pos++;
    }
    temp->next = temp->next->next;
    temp = temp->next;
    free(temp);
}
void del_alt(node *&head)
{
    node *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        node *temp = curr->next;
        curr->next = curr->next->next;
        free(temp);
        curr = curr->next;
    }
}

int main()
{
    node *head = NULL;
    insert(head, 20);
    insert(head, 30);
    insert(head, 20);
    insert(head, 30);
    insert(head, 20);
    insert(head, 30);
    insert(head, 20);
    insert(head, 30);
    // insert(head, 40);
    // insert(head, 50);
    display(head);
    inser_back(head, 10);
    inser_back(head, 0);

    display(head);
    del_alt(head);
    display(head);
}