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

void comp_nodes(node *head1, node *head2)
{
    int flag = 1;
    while (head1 != NULL && head2 != NULL)
        if (head1->val == head2->val)
        {
            head1 = head1->next;
            head2 = head2->next;
        }
        else
        {
            flag = 0;
            break;
        }
    if (head1 != NULL || head2 != NULL)
    {
        flag = 0;
    }

    flag == 1 ? cout << "Same" <<endl: cout << "not same"<<endl;
}
bool _urvi_comp_nodes(node *head1, node *head2)
{

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val != head2->val)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return (head1 == NULL && head2 == NULL);
}

int main()
{
    Linkedlist list1;
    Linkedlist list2;
    for (size_t i = 1; i < 5; i++)
    {
        list1.insert(i);
        list2.insert(i);
    }
    list1.insert(6);
    list1.insert(6);
    list2.insert(6);
    list1.display();
    list2.display();
    comp_nodes(list1.head, list2.head);
    cout<<_urvi_comp_nodes(list1.head, list2.head);
}