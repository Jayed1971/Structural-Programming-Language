#include<stdio.h>
int main(){
	int m,i;
	int n=5;
	
	int sum=0;
	for(i=1;i<=n-1;i++){
		scanf("%d",&m);
		sum=sum+m;
	}
	int total=n*(n+1)/2;
	int ans= total-sum;
	printf("\n missing number is : %d",ans);
}