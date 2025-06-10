//nCr formula using fuctions
// #include<stdio.h>
// int factorial(int x){
//     int fact = 1;
//     for(int i = 2;i <= x;i++){
//         fact = fact*i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     int r;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     printf("Enter r: ");
//     scanf("%d", &r);
//     int nfact = factorial(n);
//     int rfact = factorial(r);
//     int nrfact = factorial(n-r);
//     int nrc = nfact/(rfact*nrfact);
//     printf("%d", nrc);
//     return 0;
// }

//nCr formula without using functions
#include<stdio.h>
void main(){
    int n,r;
    int nfact = 1;
    int rfact = 1;
    int cfact = 1;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the value of r : ");
    scanf("%d",&r);
    for(int i=2;i<=n;i++){
        nfact = nfact*i;
    }
    for(int i=2;i<=r;i++){
        rfact = rfact*i;
    }
    for(int i=2;i<=(n-r);i++){
        cfact = cfact*i;
    }
    int ncr=nfact/(rfact*cfact);
    printf("combination = %d\n",ncr);
}