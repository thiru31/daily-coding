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

void insert_front(node *&head, int val)
{
    node *new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "-->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    node *head = NULL;
    cout << "Enter the number of nodes to be inserted : ";
    int ip, count;
    cin >> count;
    for (size_t i = 1; i <= count; i++)
    {

    cout << "Enter the "<<i<<"th node to be inserted : ";
        cin >> ip;
        insert_front(head, ip);
    }

    display(head);
}