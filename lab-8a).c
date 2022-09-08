//8)a)WAP to implement linear queue.
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
struct queue
{
    int rear;
    int front;
    int item[SIZE];
};
typedef struct queue qt;

void enqueue(qt *q)
{
    int d;
    printf("\nEnter data to be inserted:");
    scanf("%d",&d);
    if(q->rear==SIZE-1)
        printf("Queue is full\n");

    else
    {
        q->item[++q->rear]=d;
    }
}
void dequeue(qt *q)
{
    if(q->rear<q->front)
        printf("Queue is empty\n");
    else
    {
        printf("The deleted item is %d\n",q->item[q->front++]);
    }
}
void display(qt *q)
{
    if(q->rear<q->front)
        printf("Queue is empty\n");

    else
    {
        printf("queue items are:\n");
        for(int i=q->front;i<=q->rear;i++)
        {
            printf("%d ",q->item[i]);
        }
    }
}
int main()
{
    qt qe;
    qt *q=&qe;
    q->front=0;
    q->rear=-1;
    int choice;
    printf("1:insert\n2:delete\n3:display\n4:exit\n");
    while(choice<5)
    {
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            enqueue(q);
            break;

            case 2:
            dequeue(q);
            break;

            case 3:
            display(q);
            break;

            case 4:
            exit(1);
            break;

            default:
            printf("\nWrong choice!");
       }
    }
    return 0;
}
