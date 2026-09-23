#include<stdio.h>
int main(){
	int pos=-1,n,i;
	scanf("%d",&n);
	int a[]={3 ,6 ,9, 12, 15};
	for(i=0;i<5;i++)
	{
		if( n == a[i])
		{
			pos=i+1;
			break;
		}
	}
		if (pos==-1)
		{
			printf("Not found");
		}
		else
		{
			printf("found and position is %d",pos);
		}
}