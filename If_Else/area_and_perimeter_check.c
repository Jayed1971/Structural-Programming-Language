#include<stdio.h>
int main(){
    int length, breadth;
    scanf("%d %d",&length, &breadth);
    if(length*breadth>2*(length+breadth)){
        printf("The area of the rectangular is greater than perimeter");
    }
    else{
        printf("The area of the rectangular is smaller than perimeter");
    }
}
