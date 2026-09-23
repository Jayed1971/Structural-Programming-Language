#include<stdio.h>
int main(){
	int i,array2[30];
	int array1[30]={4,96,464,74};
	printf("array1 :");
	for(i=0;i<4;i++)
	{
		printf(" %d",array1[i]);
	}
	printf("\narray2 :");
	for(i=0;i<4;i++)
	{
		 array2[i]= array1[i];
		 
	}
	for(i=0;i<4;i++)
	{
	printf(" %d",array2[i]);
	}
	
}