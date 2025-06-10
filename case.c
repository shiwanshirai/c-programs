#include<stdio.h>
void main(){
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
        ch=ch+32;
        printf("%c",ch);
    }
    else if(ch>='a'&&ch<='z'){
        ch=ch-32;
        printf("%c",ch);
    }
    else{
        printf("invalid input");
    }
}