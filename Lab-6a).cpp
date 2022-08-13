//Write a program to convert infix into postfix operation using stack.
#include<stdio.h>
char stack[100];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}
char pop()
{
   return stack[top--];
}

int precedence(char x)
{
    if(x == '+' || x == '-')
        return 1;
    else if(x == '*' || x == '/')
        return 2;
    else if(x=='^')
        return 3;

    return 0;
}

int main()
{
    char infix[100];
    char *e,ch;
    printf("Enter the expression : ");
    scanf("%s",infix);
    e = infix;
    printf("Postfix expression is:");
    while(*e != '\0')
    {
        if(*e>='a'&&*e<='z')
            printf("%c ",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((ch =pop())!= '(')
            printf("%c ", ch);
        }
        else
        {
            while(precedence(stack[top]) >= precedence(*e))
                printf("%c ",pop());

            push(*e);
        }
        e++;
    }
    while(top != -1)
    {
        printf("%c ",pop());
    }
    return 0;
}
