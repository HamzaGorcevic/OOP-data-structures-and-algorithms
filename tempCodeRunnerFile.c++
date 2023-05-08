#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct
{
    Node *front;
    Node *rear;
} Queue;
Queue q;

void enqueu(int x)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = NULL;
    if (q.front == NULL)
    {
        q.rear = q.front = newNode;
    }
    else
    {
        q.rear->next = newNode;
        q.rear = q.rear->next;
    }
}

void dequeuByPriority()
{
    if (q.front == NULL)
    {
        printf("Queue is empt\n");
    }
    else
    {
        Node *temp = q.front;

        int min = q.front->data;
        while (temp != NULL)
        {
            if (temp->data < min)
            {
                min = temp->data;
            }
            temp = temp->next;
        }

        if (q.front->data == min)
        {
            q.front = q.front->next;
        }
        else
        {
            Node *temp2 = q.front;

            while (temp2 != NULL && temp2->next->data > min)
            {
                temp2 = temp2->next;
            }
            temp2->next = temp2->next->next;
        }
    }
}
int main()
{
    enqueu(1);
    enqueu(8);
    enqueu(12);
    enqueu(4);
    enqueu(20);
    enqueu(2);
    dequeuByPriority();
    Node *temp = q.front;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    return 0;
}
