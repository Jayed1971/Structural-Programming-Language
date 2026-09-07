#include<stdio.h>
int main(){
	int k,n,i,j;
//	k=4;
	//n=7;
	printf("Enter row :");
	scanf("%d",&n);
	if( n%2!=0){
	k=(n+1)/2;
	for(i=1 ;i<=n; i++){
		for( j=1 ;j<=n; j++){
			if( j == k-(i-1) || j==k+(i-1)){
				printf("*");
			}
				else if( j== i-(k-1) || j== k-(i-n)){
					printf("*");
				}
				else {
					printf(" ");
				}
		}
		printf("\n");
	}
	}
	else{
		printf("You must enter ann odd number");
	}
}