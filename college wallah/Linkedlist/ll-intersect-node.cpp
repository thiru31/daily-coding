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
void intersection(node *head1, node *head2, int len1, int len2)
{
    int k = abs(len1 - len2);
    if (len1 > len2)
    {
        int steps = 0;
        while (steps < k)
        {
            head1 = head1->next;
            steps++;
        }
    }
    else
    {
        int steps = 0;
        while (steps < k)
        {
            head2 = head2->next;
            steps++;
        }
    }
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val == head2->val)
        {
            cout << head1->val;
            break;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
}
int main()
{
    Linkedlist list1;
    Linkedlist list2;
    list1.insert(1);
    list1.insert(2);
    list1.insert(3);
    list1.insert(4);
    list1.insert(5);
    list2.insert(3);
    list2.insert(5);
    list1.display();
    list2.display();
    int len1 = length_of_ll(list1.head);
    int len2 = length_of_ll(list2.head);
    intersection(list1.head, list2.head, len1, len2);
}