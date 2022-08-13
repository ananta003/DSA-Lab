//Write a C program to store and display the employees information using nesting structure
#include<stdio.h>
#define N 3
struct ename{
	char name[20];
};
struct emp{
	int eid;
	int salary;
	struct ename n;
};

int main(){
	struct emp e[N];
	printf("Enter employee details\n");
	for(int i=0;i<N;i++){
		printf("Enter name,eid,salary of employee %d:",i+1);
		scanf("%s%d%d",e[i].n.name,&e[i].eid,&e[i].salary);
	}
	
	
	printf("Employee details\n");
	printf("Name\tEID\tSalary\n");
	for(int i=0;i<N;i++){
		printf("%s\t%d\t%d\n",e[i].n.name,e[i].eid,e[i].salary);
	}
	return 0;
}
