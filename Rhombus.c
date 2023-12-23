////Q)WAP to print rhombus???

#include<stdio.h>
int main(){
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);
    for( int i=1;i<=n;i++){
        for(int nsp=1;nsp<=n-i;nsp++) printf(" ");
      for(int j=1;j<=n;j++) printf("*"); 
printf("\n"); }
 return 0;}