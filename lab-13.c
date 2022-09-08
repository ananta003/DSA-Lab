//13)WAP to implement circular linked list.
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}NodeType;
NodeType *first=NULL,*last=NULL;
void insert_beg(int data)
{
    NodeType *newnode;
    newnode=(NodeType*)malloc(sizeof(NodeType));
    newnode->info=data;
    if(first==NULL)
    {
        newnode->next=newnode;
        first=newnode;
        last=newnode;
    }
    else
    {
        newnode->next=first;
        first=newnode;
        last->next=newnode;
    }
}
void insert_end(int data)
{
    NodeType *newnode;
    newnode=(NodeType*)malloc(sizeof(NodeType));
    newnode->info=data;
    if(first==NULL)
    {
        first=newnode;
        last=newnode;
        newnode->next=newnode;
    }
    else
    {
        last->next=newnode;
        last=newnode;
        newnode->next=first;
    }
}
void delete_beg()
{
    NodeType *temp;
    temp=first;
    if(first==NULL)
    {
        printf("Empty  circular linked list\n");
    }
    else if(first==last)
    {
        printf("the deleted content is %d\n",temp->info);
        first=last=NULL;
        free(temp);
    }
    else
    {
        printf("the deleted content is %d\n",temp->info);
        first=first->next;
        last->next=first;
        free(temp);
    }
}
void  delete_end()
{
    NodeType *temp;
    temp=first;
    if(last==NULL)
    {
        printf("Empty linked list\n");
    }
    else if(last==first)
    {
        printf("the deleted content is %d\n",temp->info);
        first=last=NULL;
        free(temp);
    }
    else
    {
        while(temp->next!=last)
        {
            temp=temp->next;
        }
        printf("the deleted content is %d\n",last->info);
        last=temp;
        last->next=first;
        free(temp);
    }
}
void display()
{
    NodeType *temp;
    if(first==NULL)
    {
        printf("Empty linked list\n");
    }
    else
    {
        temp=first;
        printf("The linked list contents are\n");
        while(temp!=last)
        {
            printf("%d ",temp->info);
            temp=temp->next;
        }
        printf("%d",last->info);
    }
}

int main()
{
    int choice,item;
    printf("\n 1:insert node at first\n 2:insert node at last\n");
    printf(" 3:delete first node\n 4:delete last node\n");
    printf(" 5:display nodes\n 6:exit\n");
    while(1)
    {
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter data to be inserted:");
            scanf("%d",&item);
            insert_beg(item);
            break;

        case 2:
            printf("Enter data to be inserted:");
            scanf("%d",&item);
            insert_end(item);
            break;

        case 3:
            delete_beg();
            break;

        case 4:
            delete_end();
            break;

        case 5:
            display();
            break;

        case 6:
            exit(1);
            break;

        default:
            printf("\nInvalid choice!");


        }
    }
}
