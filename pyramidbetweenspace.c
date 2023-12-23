////Q)Wap to print given pattern??

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
   int nst=n;
   int nsp=1;
    for(int i=1;i<=2*n+1;i++) printf("*");
    printf("\n");
    for(int m=1;m<=n;m++){
        for(int n=1;n<=nst;n++){
            printf("*");}
            for(int k=1;k<=nsp;k++) printf(" ");
            for(int j=1;j<=nst;j++) printf("*");
            nst --;
            nsp+=2; 
printf("\n");
        }
   return 0;
    }
