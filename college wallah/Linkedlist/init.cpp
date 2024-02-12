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
void insertatHead(node *&head, int val)
{
    node *new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

int main()

{
    node *n = new node(10);
    node *n2 = new node(20);
    delete n;
    cout << n->val << " " << n->next<<endl;
    cout << n2->val << " " << n2->next;
}
