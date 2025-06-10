//1
//22
//333
//4444
//55555
//#include<stdio.h>
//void main(){
//    int i,j;
//    for(i=1;i<=5;i++)
//    {
//        for(j=1;j<=i;j++)
//        {
//            printf("%d",i);
//        }
//        printf("\n");
//    }
//}


// *
// * *
// * * *
// * * * *
// * * * * *
// #include<stdio.h>
// void main(){
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// * * * * *
// * * * *
// * * *
// * *
// *
// #include<stdio.h>
// void main(){
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=5;j>=i;j--)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


//         *
//       * *
//     * * *
//   * * * *
// * * * * *
// #include<stdio.h>
// void main(){
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=5;j>=1;j--)
//         {
//             if(i>=j)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }
// }


#include<stdio.h>
void main(){
    int i,j,space;
    for(i=1;i<=5;i++)
    {
        for(space=1;space<=(5-i);space++)
        {
            printf("");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
