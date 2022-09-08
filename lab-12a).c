//12)a)WAP  for dynamic implementation of stack.
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
} NodeType;

NodeType *top=0;
void push(int data)
{
    NodeType *newnode;
    newnode=(NodeType*)malloc(sizeof(NodeType));
    if(top==0)
    {
        newnode->info=data;
        newnode->next=NULL;
        top=newnode;
    }
    else
    {
        newnode->info=data;
        newnode->next=top;
        top=newnode;
    }
}
void pop()
{
    NodeType *temp;
    if(top==0)
    {
        printf("Empty stack\n");
        return;
    }
    else
    {
        temp=top;
        top=top->next;
        printf("The popped item is %d\n",temp->info);
        free(temp);
    }
}
void display()
{
    NodeType *temp;
    if(top==0)
    {
        printf("Empty stack\n");
        return;
    }
    else
    {
        temp=top;
        printf("The stack items are\n");
        while(temp!=0)
        {
            printf("%d ",temp->info);
            temp=temp->next;
        }
    }

}
int main()
{
    int choice,item;
    printf("\n 1:push\n 2:pop\n 3:display\n 4:exit\n");
    while(1)
    {
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the data:");
            scanf("%d",&item);
            push(item);
            break;

        case 2:
            pop();
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
