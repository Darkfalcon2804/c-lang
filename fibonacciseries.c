////Q)WAP to print fibonacci series ???

#include<stdio.h>
int fibo(int n){
    if(n==1||n==2) return 1;
    else return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    printf("Enter the no:  ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x=fibo(i);
        printf("%d\n ",x);
    }
return 0;}