//lab-4 b)Write a program to sort given 10 numbers using array with pointer
#include<stdio.h>
int main(){
	int arr[10],i,j;
	int *ptr;
	ptr=arr;
	printf("Enter 10 numbers:");
	for(i=0;i<10;i++){
		scanf("%d",ptr+i);
	}
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(*(ptr+i)>*(ptr+j)){
				int temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	printf("The sorted array in descending order:\n");
	for(i=0;i<10;i++){
		printf("%d ",*(ptr+i));
	}
}
