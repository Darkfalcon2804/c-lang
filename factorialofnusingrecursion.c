//////Q)Make a function which calculates the factorial of n using recursion???

#include<stdio.h>
int fact(int n){
    if(n<0) printf("Invalid\n");
    return 0;
if(n==0 ||n==1) return 1;
else return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int x=fact(n);
    printf("%d\n",x);
    return 0;
}