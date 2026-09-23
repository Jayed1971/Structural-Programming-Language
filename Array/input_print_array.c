#include<stdio.h>
int main(){
	int num[100], i,n;
	printf("How many terms do you want ? :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		
	}
	printf("You entered :");
	for(i=0;i<n; i++)
	{
	//	printf("You entered :");
	printf(" %d  ",num[i]);
}
}