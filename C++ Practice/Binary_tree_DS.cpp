#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int value)
    {
        data = value;

        left = NULL;
        right = NULL;
    }
};

void post_order_traversal(Node *root)
{
    if (root->left != NULL)
    {
        post_order_traversal(root->left);
    }
    if (root->right != NULL)
    {
        post_order_traversal(root->right);
    }

    cout << root->data << "  ";
}

void pre_order_traversal(Node *root)
{
    cout << root->data << "  ";

    if (root->left != NULL)
    {
        post_order_traversal(root->left);
    }
    if (root->right != NULL)
    {
        post_order_traversal(root->right);
    }
}

void in_order_traversal(Node *root)
{
    if (root->left != NULL)
    {
        post_order_traversal(root->left);
    }

    cout << root->data << "  ";

    if (root->right != NULL)
    {
        post_order_traversal(root->right);
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    pre_order_traversal(root);
    cout << endl;
    post_order_traversal(root);
    cout << endl;
    in_order_traversal(root);
    cout << endl;
}