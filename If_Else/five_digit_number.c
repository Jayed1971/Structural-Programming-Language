#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>9999 && x<100000){
        printf(
"This is a five digit number");
    }
    else{
        printf(
"This is not a five digit number");
    }
    return 0;
}
