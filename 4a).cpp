//lab-4 a)write a program to find transpose of given 3x3 matrix using array with pointer
#include<stdio.h>
int main(){
	int m[3][3],i,j,transpose[3][3];
	printf("Enter any 3x3 matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",*(m+i)+j);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			*(*(transpose+j)+i)=*(*(m+i)+j);	
		}
	}
	
	printf("The transpose matrix is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",*(*(transpose+i)+j));
		}
		printf("\n");
	}
	return 0;
	
}
//#include<stdio.h>
//int main(){
//	int m[3][3];
//	int (*p)[3];
//	p=m;
//	printf("Enter any 3x3 matrix:\n");
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			scanf("%d",*(p+i)+j);
//		}
//		
//	}
//	
//	
//	
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			*(*(p+j)+i)=*(*(p+i)+j);
//		}
//	}
//	printf("The transpose matrix is:\n");
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			printf("%d ",*(*(p+i)+j));
//		}
//		printf("\n");
//	}
//	
//	
//}
