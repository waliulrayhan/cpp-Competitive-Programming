#include <iostream>
#define Queue_size 100 + 1
using namespace std;

typedef struct
{
    int head, tail;
    int data[Queue_size];
} Queue;

void enqueue(Queue *q, int item)
{
    if ((q->tail + 1) == q->head)
    {
        cout << "Queue is Full!" << endl;
        return;
    }

    q->data[q->tail] = item;
    q->tail = (q->tail + 1);
}

int dequeue(Queue *q)
{
    if (q->tail == q->head)
    {
        cout << "Queue is Empty!" << endl;
        return -1;
    }

    int item;
    item = q->data[q->head];
    q->head = (q->head + 1);
    return item;
}

int main()
{
    Queue my_queue;
    int item, A[50], n;

    my_queue.head = 0;
    my_queue.tail = 0;

    cout << "How many you want?" << endl;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        enqueue(&my_queue, A[i]);
    }

    item = dequeue(&my_queue);
    cout << item;
}