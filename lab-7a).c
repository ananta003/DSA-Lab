//7.a)WAP to evaluate postfix expression.
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
    char postfix[20];
    printf("Enter valid postfix operation:");
    scanf("%s",postfix);
    int len=strlen(postfix);
    for(int i=0;i<len;i++)
    {
        if(postfix[i]>='a'&&postfix[i]<='z')
        {
            printf("\nEnter value of %c:",postfix[i]);
            scanf("%d",&value[i]);
            push(value[i]);
        }
        else
        {
            char ch=postfix[i];
            op2=pop();
            op1=pop();
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
    printf("\nThe result is %d",pop());
}
