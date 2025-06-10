#include<stdio.h>
void main()
{
    int n1,n2,n3,avg;
    printf("enter 3 numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    avg=(n1+n2+n3)/3;
    printf("the average of the numbers is = %d", avg);
}