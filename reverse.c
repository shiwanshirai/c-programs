//reverse of a string
// #include<stdio.h>
// void main()
// {
//     char s[50],r[50];
//     int i,j;
//     printf("Enter a String: \n");
//     gets(s);
//     for(i=0;s[i]!='\0';i++);
//     for(i=i-1,j=0;i>=0;i--,j++)
//     {
//         r[j]=s[i];
//     }
//     r[j]= '\0';
//     printf("reversed string : %s\n", r);
// }

//check if a string is palindrome or not
// #include<stdio.h>
// void main()
// {
//     char s[50],r[50];
//     int i,j;
//     printf("Enter a String: \n");
//     gets(s);
//     for(i=0;s[i]!='\0';i++);
//     for(i=i-1,j=0;i>=0;i--,j++)
//     {
//         r[j]=s[i];
//     }
//     r[j]= '\0';
//     printf("reversed string : %s\n", r);
//     for(i=0;s[i]!='\0';i++)
//     {
//         if(s[i] == r[i]){
//         printf("palindrome");
//         break;
//     }
//     else{
//         printf("not palindrome");
//         break;
//     }
//     }
// }

//copy a string to another string
#include<stdio.h>
void main(){
    char a[50],b[50];
    int i;
    printf("enter a string : ");
    gets(a);
    for(i=0;a[i] != 0;i++){
        b[i]=a[i];
    }
    b[i]='\0';
    printf("%s", b);
}