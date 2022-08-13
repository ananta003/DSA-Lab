// lab-2Write a c program to 	tnraspose any 3x3 marix and add another 3x3 matrix
#include<stdio.h>
void result(int a[][3],int b[][3]){
	int i,j,trans[3][3],sum[3][3];
	for(i=0;i<3;i++){

		for(j=0;j<3;j++){
			trans[j][i]=a[i][j];
		}
	}
	printf("The transpose matrix is\n");
	for(i=0;i<3;i++){

		for(j=0;j<3;j++){
			printf("%d ",trans[i][j]);
			}
		printf("\n");
	}
	
	printf("The sum matrix\n");
	for(i=0;i<3;i++){

		for(j=0;j<3;j++){
			sum[i][j]=trans[i][j]+b[i][j];
			printf("%d ",sum[i][j]);
		}
	printf("\n");
	}
}
void input(int m[3][3]){
	int i,j;
	for(i=0;i<3;i++){

		for(j=0;j<3;j++){
			scanf("%d",&m[i][j]);
		}
	}
}
int main(){
	int m1[3][3],m2[3][3];
	printf("Enter first matrix\n");
	input(m1);
	printf("\nEnter second matrix\n");
	input(m2);
	result(m1,m2);
	return 0;
}
