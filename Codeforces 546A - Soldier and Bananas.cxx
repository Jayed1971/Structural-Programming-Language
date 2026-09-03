#include<stdio.h>
int main(){
	int k,n,w,i,s,borrow;
	scanf("%d",&k);
	scanf("%d",&n);
	scanf("%d",&w);
	s=0;
	for(i=1;i<=w;i++){
	s=s+k*i;}
	borrow=s-n;
	if(borrow<=0){
		printf("0");
	}
	else{
	printf("%d",borrow);
	}
	
}
	