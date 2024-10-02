#include <stdio.h>
#include <stdlib.h>

struct circularqueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isempty(struct circularqueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int isfull(struct circularqueue *q)
{
    if ((q->r + 1)%q->size == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct circularqueue *q, int value)
{
    if (isfull(q))
    {
        printf("the queue is full");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = value;
        printf("enqued element:%d\n");
    }
}

int dequeue(struct circularqueue *q)
{
    int a =-1;
    if (isempty(q))
    {
        printf("this queue is empty");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a=q->arr[q->f];
    }
    return a;
}

int main()
{
    struct circularqueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // ENQUEUE FEW ELEMENTS
    enqueue(%q, 12);
    enqueue(%q, 15);
    enqueue(%q, 19);

    dequeue(&q);
    dequeue(&q);

    enqueue(&q, 45);
    enqueue(&q, 5);

    if (isempty(&q))
    {
        printf("full\n");
    }
    if (isempty(&q))
    {
        printf("empty\n");
    }
    return 0;
}
