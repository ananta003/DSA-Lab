// LAb-3WAP to find sum of any 3x3 matrix by using array with pointer
#include<stdio.h>
void matIn(int m[3][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",(*(m+i)+j));
		}
	}
}
int main(){
	int m1[3][3],m2[3][3],sum[3][3];
	printf("Enter first matrix:\n");
	matIn(m1);
	printf("\nEnter second matrix\n");
	matIn(m2);
	
	printf("\nThe sum matrix is:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			*(*(sum+i)+j)=*(*(m1+i)+j)+*(*(m2+i)+j);
			printf("%d ",*(*(sum+i)+j));
			}
			printf("\n");
	}
	return 0;
	
}
