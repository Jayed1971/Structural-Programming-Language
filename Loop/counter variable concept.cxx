#include<stdio.h>
int main(){
	int n,i,j;
	int number=1;
	printf("Enter row :");
	scanf("%d",&n);
	for(i=1; i<=n;i++){
		for(j=1; j<=n; j++){
			if(j<=i){
				printf("%d",number);
				number++;
			}
		}
		printf("\n");
	}
}