//7c)WAP to implement ToH problem.
#include<stdio.h>
void TOH(int n,char a,char b,char c)
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        printf("Move disk %d from %c to % c\n",n,a,b);
        TOH(n-1,c,b,a);
    }

}
int main()
{
    int n;
    printf("Enter no of disks:");
    scanf("%d",&n);
    TOH(n,'S','D','T');
    return 0;
}
