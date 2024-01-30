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
    temp->next=temp->next->next;
    free(del);
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
    list1.display();
    int len1 = length_of_ll(list1.head);
    int k = 2;
    del_kth_from_end(list1.head, len1 - k);
    list1.display();

}