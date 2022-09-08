//11)WAP to implement singly linked list.
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}NodeType;

NodeType *head=NULL;
void insert_at_first(int item)
{
    NodeType *newnode;
    newnode=(NodeType*)malloc(sizeof(NodeType));
    newnode->info=item;
    newnode->next=head;
    head=newnode;
}
void  insert_at_anypos(int item)
{
    NodeType *nnode;
    NodeType *temp;
    temp=head;
    int i,pos;
    nnode=(NodeType*)malloc(sizeof(NodeType));
    nnode->info=item;
    if(head==NULL)
    {
        nnode->next=NULL;
        head=nnode;
    }
    else
    {
        printf("Enter any position node to be inserted:");
        scanf("%d",&pos);
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        nnode->next=temp->next;
        temp->next=nnode;
    }
}
void insert_at_last( int item)
{
    NodeType *nnode;
    NodeType *temp;
    temp=head;
    nnode=(NodeType*)malloc(sizeof(NodeType));
    nnode->info=item;
    if(head==NULL)
    {
        nnode->next=NULL;
        head=nnode;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        nnode->next=NULL;
        temp->next=nnode;
    }
}
void delete_node_first()
{
    NodeType *temp;
    if(head==NULL)
    {
        printf("Empty list\n");
        return;
    }
    else
    {
        temp=head;
        printf("The deleted node content is %d\n",temp->info);
        head=head->next;
        free(temp);
    }
}
void  delete_node_at_anypos()
{
    NodeType *hold,*temp;
    int pos,i;
    if(head==NULL)
    {
        printf("Void deletion\n");
        return;
    }
    else
    {
        temp=head;
        printf("Enter position to delete node");
        scanf("%d",&pos);
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        hold=temp->next;
        printf("The deleted node content is %d\n",hold->info);
        temp->next=hold->next;
        free(hold);
    }
}
void delete_node_last()
{
    NodeType *hold,*temp;
    if(head==NULL)
    {
        printf("Void deletion\n");
        return;
    }
    else if(head->next==NULL)
    {
        hold=head;
        printf("The deleted node content is %d\n",hold->info);
        head=NULL;
        free(hold);
    }
    else
    {
        temp=head;
       while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        hold=temp->next;
        printf("The deleted node content is %d\n",hold->info);
        temp->next=NULL;
        free(hold);
    }

}
void  count_node()
{
    int count=0;
    NodeType *temp;
    while(temp->next!=NULL)
    {
        count+=1;
        temp=temp->next;
    }
    printf("The number of node is %d\n",count);
}
void display()
{
    NodeType *temp;
    temp=head;
    if(head==NULL)
    {
        printf("Empty linked list\n");
    }
    else
    {
        printf("The node content are\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->info);
            temp=temp->next;
        }
    }
}
int main()
{
    int choice,item;
    printf("1:insert node at first\n 2:insert at given position\n 3:insert node at last\n");
    printf("4:delete first node\n 5:delete node at given position\n 6:delete last node\n");
    printf("7:count nodes\n 8:display nodes items\n 9:exit");
    while(1)
    {

        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the items to be inserted:");
            scanf("%d",&item);
            insert_at_first(item);
            break;

        case 2:
            printf("Enter the items to be inserted:");
            scanf("%d",&item);
            insert_at_anypos(item);
            break;
        case 3:
            printf("Enter the items to be inserted:");
            scanf("%d",&item);
            insert_at_last(item);
            break;
        case 4:
            delete_node_first();
            break;

        case 5:
            delete_node_at_anypos();
            break;

        case 6:
            delete_node_last();
            break;

        case 7:
            count_node();
            break;

        case 8:
            display();
            break;

        case 9:
            exit(1);
            break;

        default:
            printf("\nEnter valid choice!");
        }
    }

}
