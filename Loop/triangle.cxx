#include<stdio.h>
int main(){
	int n,i,j;
	do{
	printf("Enter row :");
	scanf("%d",&n);
	if(n%2!=0){
	for(i=1; i<=n; i++){
		for(j=1; j<=(n+1)/2; j++){
			if( j<=i && j<=(n+1)-i){
				printf("#");
			}
			/*else if(j<=(n+1)-i){
				printf("*");
			}*/
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	}
	else{
		printf("You must enter odd number\n");
	}
	} 
	while(n=1);
}