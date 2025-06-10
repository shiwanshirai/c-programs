#include<stdio.h>
#include<conio.h>
void main(){
    float a,b,c;
    char op;
    printf("enter the two numbers");
    scanf("%f %f",&a,&b);
    fflush(stdin);
    printf("enter operator:\n");
    scanf("%c",&op);
    switch(op)
    {
        case'1': c=a+b;
        printf("addition = %f",c);
        break;
        case'2': c=a-b;
        printf("subtraction = %f",c);
        break;
        case'3': c=a*b;
        printf("mulplication = %f",c);
        break;
        case'4': c=a/b;
        printf("division = %f",c);
        break;
        default: printf("invalid syntax");
        break;
    }
    getch();
}