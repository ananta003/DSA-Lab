//7.b)WAP to evaluate prefix expression.
#include<stdio.h>
#include<math.h>
#include<string.h>
int top=-1;
int stack[50];
void push(int data)
{
    stack[++top]=data;
}
int pop()
{
 return stack[top--];
}
int main()
{
    int op1,op2,value[20];
    char prefix[20];
    printf("Enter valid prefix operation:");
    gets(prefix);
    int len=strlen(prefix);
    for(int i=len-1;i>=0;i--)
    {
        if(prefix[i]>='a'&&prefix[i]<='z')
        {
            printf("\nEnter value of %c:",prefix[i]);
            scanf("%d",&value[i]);
            push(value[i]);
        }
        else
        {
            char ch=prefix[i];
            op1=pop();
            op2=pop();
            switch(ch)
            {
            case '+':
                push(op1+op2);
                break;

            case '-':
                push(op1-op2);
                break;

            case '*':
                push(op1*op2);
                break;

            case '/':
                push(op1/op2);
                break;

            case '^':
                push(pow(op1,op2));
                break;
            }
        }
    }
    printf("\nThe result is %d.",pop());
}
