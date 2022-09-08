//12 b)WAP for linked list implementation of linear queue.
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}NodeType;
NodeType *rear=NULL,*front=NULL;

void enqueue(int data)
{
     NodeType *newnode;
     newnode=(NodeType*)malloc(sizeof(NodeType));
     if(rear==NULL)
     {
         newnode->info=data;
         newnode->next=NULL;
         rear=front=newnode;
     }
     else
     {
         newnode->info=data;
         newnode->next=NULL;
         rear->next=newnode;
         rear=newnode;
     }
}
void dequeue()
{
    NodeType *temp;
    if(front==NULL)
    {
        printf("Queue empty!\n");
        return;
    }
    else if(front->next==NULL)
    {
        temp=front;
        rear=front=NULL;
        printf("\nDeleted item is %d\n",temp->info);
        free(temp);
    }
    else
    {
        temp=front;
        front=front->next;
        printf("\nDeleted item is %d\n",temp->info);
        free(temp);
    }
}
void display()
{
    NodeType *temp;
    temp=front;
    printf("The queue items are\n");
    while(temp!=NULL)
    {
        printf("%d ",temp->info);
        temp=temp->next;
    }
}
int main()
{
    int choice,item;
    printf("\n 1:Enqueue\n 2:Dequeue\n 3:display\n 4:exit\n");
    while(1)
    {
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the data:");
            scanf("%d",&item);
            enqueue(item);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(1);
            break;

        default:
            printf("Invalid choice!");
        }
    }
}
