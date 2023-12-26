//////Q)Wap to print sum from 1to n(return type)????
#include<stdio.h>
int sum(int n){
   if(n==1){ return 1;}
   else  return n+sum(n-1);
}

int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int z=sum(n);
printf("%d\n",z);
return 0;
}