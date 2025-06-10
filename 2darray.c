//print an array

// #include<stdio.h>
// void main()
// {
//     int i,j;
//     int a[2][3]={{4,5,6},{7,8,9}};
//     printf("Elements of array are:\n");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//     printf("\n");
//     }
// }

//print an array entered by the user

// #include<stdio.h>
// void main()
// {
//     int a[4][2],i,j;
//     printf("enter the elements of array:\n");
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<2;j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("the elements of the array are:\n");
//     for(i=0;i<4;i++){
//         for(j=0;j<2;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
// }

//sum of two matrices
// #include<stdio.h>
// void main()
// {
//     int a[2][2],b[2][2],c[2][2],i,j;
//     printf("enter the elements of first array:\n");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("enter the elements of second array:\n");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++){
//             scanf("%d", &b[i][j]);
//         }
//     }
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
//     printf("sum of arrays:\n");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++){
//             c[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     printf("sum :\n");
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }
// }

//transpose of a matrix

// #include<stdio.h>
// void main()
// {
//     int a[3][3],t[3][3],i,j,m;
//     printf("enter the size of the array: /n");
//     scanf("%d", &m);
//     printf("enter the elements of first array:\n");
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<m;j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for(i=0;i<m;i++){
//         for(j=0;j<m;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("transpose of arrays:\n");
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<m;j++){
//             t[j][i]=a[i][j];
//         }
//     }
//     for(i=0;i<m;i++){
//        for(j=0;j<m;j++){
//            printf("%d ",t[i][j]);
//        }
//        printf("\n");
//     }
// }

// sum of diagonal elements

// #include<stdio.h>
// void main()
// {
//     int i,j,sum=0,m;
//     printf("enter the size of array: \n");
//     scanf("%d", &m);
//     int a[m][m];
//     printf("enter the elements of first array:\n");
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<m;j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for(i=0;i<m;i++){
//         for(j=0;j<m;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("sum of diagonal elements:\n");
//         for(i=0;i<m;i++)
//         {
//             sum=sum+a[i][i];
//         }
//         printf("%d",sum);
// }

// check if a matrix is singular or not

// #include<stdio.h>
// void main()
// {
//     int a[5][5],t[5][5],i,j,m,s=0;
//     printf("enter the order of the matrix: \n");
//     scanf("%d", &m);
//     printf("enter the elements of array:\n");
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<m;j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for(i=0;i<m;i++){
//         for(j=0;j<m;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("transpose of arrays:\n");
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<m;j++){
//             t[j][i]=a[i][j];
//         }
//     }
//     for(i=0;i<m;i++){
//        for(j=0;j<m;j++){
//            printf("%d ",t[i][j]);
//        }
//        printf("\n");
//     }
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             if(t[i][j]!=a[i][j])
//             {
//                 s=1;
//                 break;
//             }
//         }
//     }
//     if(s==1){
//     printf("not symmetric");
//     break;
//     }
//     else{
//     printf("symmetric");
//     }
//     break;
// }

// multiplication of a matrix
#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],c[5][5],m,n,o,p,i,j,s,k;
    printf("enter the order of first matric: \n");
    scanf("%d %d", &m,&n);
    printf("enter the order of second matrix: \n");
    scanf("%d %d", &o,&p);
    if(n != o)
    {
        printf("multiplication is not possible");
    }
    else{
    printf("enter the elements of first array: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the element of second elemenet: \n");
    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++){
            s=0;
            for(k=0;k<n;k++)
            {
                s=s+a[i][k]*b[k][j];
            }
        }
    }
}

}