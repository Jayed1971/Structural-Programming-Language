#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c){
        printf("%d is the greates",a);
    }
    else if(b>c&&b>c){
        printf("%d is the greatest",b);

    }
    else{
        printf("%d is the greatest",c);
    }
}
