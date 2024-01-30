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
        while (temp != NULL)
        {
            cout << temp->val << "-->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

node *merege_LL(node *&head1, node *&head2)
{
    node *ptr1 = head1;
    node *ptr2 = head2;
    node *ptr3 = NULL;
    node *head;
    if (ptr1->val < ptr2->val)
    {
        ptr3 = ptr1;
        ptr1 = ptr1->next;
        head = ptr3;
    }
    else
    {
        ptr3 = ptr2;
        ptr2 = ptr2->next;
        head = ptr3;
    }

    while (ptr2 != NULL && ptr1 != NULL)
    {
        if (ptr1->val < ptr2->val)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
            ptr3 = ptr3->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
            ptr3 = ptr3->next;
        }
    }
    if (ptr1 != NULL)
    {
        ptr3->next = ptr1;
    }
    if (ptr2 != NULL)
    {
        ptr3->next = ptr2;
    }
    return head;
}

node *merger_k_lists(vector<node *> lists)
{

    while (lists.size() > 1)
    {
        node *final_head = merege_LL(lists[0], lists[1]);
        lists.push_back(final_head);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    return lists[0];
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
    linkedlist l1;
    linkedlist l2;
    linkedlist l3;
    linkedlist l4;
    l1.insert(1);
    l1.insert(2);
    l1.insert(5);

    l2.insert(3);
    l2.insert(4);
    l2.insert(8);

    l3.insert(6);
    l3.insert(9);

    // l1.display();
    // l2.display();
    // l1.head = merege_LL(l1.head, l2.head);
    // l1.head = merege_LL(l1.head, l3.head);
    // l1.display();

    vector<node *> lists;
    lists.push_back(l1.head);
    lists.push_back(l2.head);
    lists.push_back(l3.head);
    node *final_head = merger_k_lists(lists);
    display(final_head);
}