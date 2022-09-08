//8.b) WAP to implement circular queue.
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
typedef struct cqueue
{
    int rear;
    int front;
    int item[SIZE];
}qu;
void enqueue(qu *q)
{
    int data;
    if((q->rear+1)%SIZE==q->front)
        printf("Queue is full\n");

    else
    {
        q->rear=(q->rear+1)%SIZE;
        printf("\nEnter data to be inserted:");
        scanf("%d",&data);
        q->item[q->rear]=data;
    }
}
void dequeue(qu *q)
{
    if(q->front==q->rear)
        printf("\nQueue is empty\n");

    else
    {
        q->front=(q->front+1)%SIZE;
        printf("The deleted item is %d\n",q->item[q->front]);
    }
}
void display(qu *q)
{
    int i;
    if(q->front==q->rear)
        printf("\nQueue is empty\n");

    else
    {
        printf("Items in queue are:");
        for(i=(q->front+1)%SIZE;i!=q->rear;i=(i+1)%SIZE)
        {
            printf("%d ",q->item[i]);
        }
        printf("%d",q->item[q->rear]);
    }
}
int main()
{
    int choice;
    qu q;
    qu *cq=&q;
    cq->rear=SIZE-1;
    cq->front=SIZE-1;
    printf("1:Enqueue\n2:Dequeue\n3:Display\n4:Exit\n");
    while(choice<5)
    {
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            enqueue(cq);
            break;

        case 2:
            dequeue(cq);
            break;

        case 3:
            display(cq);
            break;

        case 4:
            exit(1);
            break;

        default:
            printf("Enter valid choice\n");
        }
    }
    return 0;
}
