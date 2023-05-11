#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void prepend(Node **head, int new_data)
{
    Node *new_node = new Node();

    new_node->data = new_data;

    new_node->next = (*head);

    (*head) = new_node;
}

void insert(Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout << "The given previous node cannot be NULL";
        return;
    }

    Node *new_node = new Node();

    new_node->data = new_data;

    new_node->next = prev_node->next;

    prev_node->next = new_node;
}

void append(Node **head, int new_data)
{

    Node *new_node = new Node();

    Node *last = *head;

    new_node->data = new_data;

    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    return;
}

void *remove_node(Node *head, int key)
{
    Node *current_node = head;
    Node *prev = NULL;

    if (current_node != NULL && current_node->data == key)
    {
        head = current_node->next;
        delete current_node;
    }
    else
    {
        while (current_node != NULL && current_node->data != key)
        {
            prev = current_node;
            current_node = current_node->next;
        }

        prev->next = current_node->next;
        delete current_node;
    }
}

void printList(Node *node)
{
    int count = 0;
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
        count++;
    }
    cout << count;
}

int main()
{
    Node *n = NULL;

    append(&n, 6);
    prepend(&n, 7);
    prepend(&n, 1);
    append(&n, 4);
    insert(n->next, 8);
    cout << "Created Linked list is: ";
    printList(n);

    remove_node(n, 4);
    cout << "After list is: ";
    printList(n);

    return 0;
}