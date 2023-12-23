////Q)Wap to print given pattern??
//////////////////////DOUBT 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    n-=1;
   int nst=n;
   int nsp=1;
    for(int i=1;i<=2*n+1;i++) printf("%d",i);
    printf("\n");
    for(int m=1;m<=n;m++){
        int a=1;
        for(int n=1;n<=nst;n++){
            printf("%d",n);
            a++;
        }
            for(int k=1;k<=nsp;k++) {
                printf(" ");
                        a++;}   
             for(int j=1;j<=nst;j++) {
                j=m+j-2;
                 printf("%d",j);
                 a++;}
            nst --;
            nsp+=2; 
printf("\n");
        }
   return 0;
    }
