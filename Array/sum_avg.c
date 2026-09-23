#include<stdio.h>
int main(){
	int num[100],n,i;
	int sum =0;
	printf("How many terms do you want ?:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for( i=0;i<n;i++)
	{
		sum = sum+ num[i];
	}
	float avg =( float) sum/(n-1);
	printf("Sum is  : %d\navg is  : %.2f", sum,avg);
}