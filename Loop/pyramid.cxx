#include<stdio.h>
int main(){
	int i,k,n;
	printf("Enter the row :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=1;k<=2*n-1;k++){
		if(k>=n-(i-1)&&k<=n+(i-1)){
			printf("*");
		}
		else{
			printf(" ");
		}
		}
		printf("\n");
	}
}
//https://youtu.be/KdM6OrvcjPI?si=NSBpwTnWciKbXdP-