#include<stdio.h>
int main(){
	int n,i,j;
	printf("enter row :");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		for(j=1; j<=(2*n-1) ;j++){
			if( j>= n+(i-n) &&  j<= n-(i-n)){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
	