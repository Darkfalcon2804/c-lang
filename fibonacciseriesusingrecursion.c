////Q)Write a function to calculate the nth fibonacci number using recursion???

#include<stdio.h>
int fibo(int n){
    if(n==1||n==2) return 1;
    else return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int x=fibo(n);
    printf("The value of %d in fibonacci series=%d\n",n,x);
    return 0;
}