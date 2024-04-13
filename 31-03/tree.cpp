#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *left;
    node *right;
    node(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

class bst
{
public:
    node *root;
    bst()
    {
        root = NULL;
    }
    void insert(int val)
    {
        root = insertUtil(root, val);
    }
    node *insertUtil(node *root, int val)
    {
        if (root == NULL)
        {
            return new node(val);
        }
        if (val > root->val)
        {
            root->right = insertUtil(root->right, val);
        }
        else if (val < root->val)
        {
            root->left = insertUtil(root->left, val);
        }
        return root;
    }
    void preorder(node *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->val << "--";
        preorder(root->left);
        preorder(root->right);
    }
    void postorder(node *root)
    {
        if (root == NULL)
        {
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout << root->val << "--";
    }
    void inorder(node *root)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left);
        cout << root->val << "--";
        inorder(root->right);
    }
};
int tree_height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int height_left = tree_height(root->left);
    int height_right = tree_height(root->right);

    return (max(height_left, height_right) + 1);
}

int main()
{
    bst b;
    node *root = NULL;
    b.insert(2);
    b.insert(1);
    b.insert(3);
    // b.insert(4);
    b.insert(5);
    // b.preorder(b.root);
    // cout<<endl;
    // b.postorder(b.root);
    // cout<<endl;
    // b.inorder(b.root);
    cout << tree_height(b.root);
    return 0;
}