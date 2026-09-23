#include<stdio.h>
int main(){
	int n,i,num[30];
	printf("How many terms do you want ? :");
	scanf("%d",&n);
	num[0]=0;
	num[1] =1;
	for (i=2;i<n;i++)
	{
		num[i]=num[i-2]+num[i-1];
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d  ",num[i]);
	}
}