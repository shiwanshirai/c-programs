//length
// #include<stdio.h>
// #include<string.h>
// void main(){
//     int n;
//     char str[20];
//     printf("enter a string : \n");
//     //scanf("%s", &str);
//     gets(str);
//     n=strlen(str);
//     printf("%d",n);
// }

//compare
// #include<stdio.h>
// #include<string.h>
// void main(){
//     char s1[20];
//     char s2[20];
//     int n;
//     printf("enter first string : \n");
//     gets(s1);
//     printf("enter second string : \n");
//     gets(s2);
//     n=strcmp(s1,s2);
//     printf("%d", n);
// }

//copy
// #include<stdio.h>
// #include<string.h>
// void main(){
//     char s1[20];
//     char s2[20];
//     printf("enter a string : \n");
//     gets(s1);
//     strcpy(s2,s1);
//     printf("%s",s2);
// }

// concatination
// #include<stdio.h>
// #include<string.h>
// void main(){
//     char s1[20];
//     char s2[20];
//     printf("enter the first string : \n");
//     gets(s1);
//     printf("enter the second string : \n");
//     gets(s2);
//     strcat(s2,s1);
//     printf("%s",s2);
//     // s1 gets connected to s2
//     //strcat(s1,s2);
//     //printf("%s",s1);......s2 gets attached to s1f
// }

//reverse
// #include<stdio.h>
// #include<string.h>
// void main(){
//     char s1[20];
//     printf("enter a string : \n");
//     gets(s1);
//     strrev(s1);
//     printf("%s", s1);
// }

//uppercase
// #include<stdio.h>
// #include<string.h>
// void main(){
//     char s1[20];
//     printf("enter a string in lowercase : \n");
//     gets(s1);
//     strupr(s1);
//     printf("%s", s1);
// }

//lower
// #include<stdio.h>
// #include<string.h>
// void main(){
//     char s1[20];
//     printf("enter a string in upperercase : \n");
//     gets(s1);
//     strlwr(s1);
//     printf("%s", s1);
// }

// lenght of string using for loop

#include<stdio.h>
#include<string.h>
void main(){
    int l;
    char str[20];
    printf("enter the string : ");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        l++;
    }
    printf("lenght : %d", l);
}