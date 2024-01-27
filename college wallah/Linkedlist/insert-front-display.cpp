#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *n;
    node(int data)
    {
        val = data;
        n = NULL;
    }
};
void insertatHead(node* &head, int val)
{
    node *new_node= new node(val);
    new_node->n= head;
    head=new_node;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->n;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insertatHead(head, 1);
    insertatHead(head, 4);
    insertatHead(head, 5);
    display(head);
}