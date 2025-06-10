#include<stdio.h>
void main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    if(a>0){
        printf("the number is positive");
    }
    else if(a<0)
    {
        printf("the number is negative");
    }
    else{
        printf("the number is 0");
    }
}