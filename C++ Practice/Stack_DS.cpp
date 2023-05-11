#include <iostream>
#define Stack_max 100
using namespace std;

typedef struct
{
    int top;
    int data[Stack_max];
} Stack;

void push(Stack *s, int item)
{
    if (s->top < Stack_max)
    {
        s->data[s->top] = item;
        s->top = s->top + 1;
    }
    else
    {
        cout << "Stack is Full!" << endl;
    }
}

int pop(Stack *s)
{
    int item;
    if (s->top == 0)
    {
        cout << "Stack is Empty!" << endl;
        return -1;
    }
    else
    {
        s->top = s->top - 1;
        item = s->data[s->top];
    }

    return item;
}

int main()
{
    Stack my_stack;
    int item, A[50], n;

    my_stack.top = 0;

    cout << "How many you want?" << endl;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        push(&my_stack, A[i]);
    }

    item = pop(&my_stack);

    cout << item;
}