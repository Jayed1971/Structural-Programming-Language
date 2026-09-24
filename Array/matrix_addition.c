#include<stdio.h>
int main(){
	int i,j;
	int A[3][3];
	int B[3][3];
	int C[3][3];
	printf("Enter elements for matrix A :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("A[%d][%d] :",i,j);
			scanf("%d",&A[i][j]);
		}
		printf("\n");
	
	}
	printf("A =");
	
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("\t%d",A[i][j]);
			}
			printf("\n\n");
		}
		
		printf("Enter elements for matrix B :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("B[%d][%d] :",i,j);
			scanf("%d",&B[i][j]);
		}
		printf("\n");
	
	}
	printf("B =");
	
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("\t%d",B[i][j]);
			}
			printf("\n\n");
		}
		printf("mat C= mat A + mat B\n");

	for( i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			C[i][j]= A[i][j] + B[i][j];
			printf("%d\t\t",C[i][j]);
		}
		printf("\n\n");
	}
}

	