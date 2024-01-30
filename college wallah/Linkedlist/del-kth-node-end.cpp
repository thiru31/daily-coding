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
int length_of_ll(node *head)
{
    int count = 0;
    while (head != NULL)
    {
        head = head->next;
        count++;
    }
    return count;
}
void del_kth_from_end(node *head, int k)
{
    node *temp = head;
    int count = 0;
    while (count < k - 1)
    {
        temp = temp->next;
        count++;
    }
    node *del = temp->next;
    temp->next = temp->next->next;
    free(del);
}

void del_kth_singletraversal(node *head, int k)
{
    node *ptr1 = head;
    node *ptr2 = head;
    int count = 0;
    while (count < k)
    {
        ptr2 = ptr2->next;
        count++;
    }
    while (ptr2->next != NULL)
    {
        ptr2 = ptr2->next;
        ptr1 = ptr1->next;
    }
    node *del= ptr1->next;
    ptr1->next=ptr1->next->next;
    free(del);
    // cout << ptr1->val;
    // cout << ptr2->val;
}

int main()
{
    Linkedlist list1;
    list1.insert(1);
    list1.insert(2);
    list1.insert(3);
    list1.insert(4);
    list1.insert(5);
    list1.insert(6);
    int len1 = length_of_ll(list1.head);
    list1.display();
    int k;
    cout << "Enter the kth node to be deleted from end: ";
    cin >> k;
    // del_kth_from_end(list1.head, len1 - k);
    // list1.display();
    del_kth_singletraversal(list1.head, k);
    list1.display();
}