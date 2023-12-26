//////Q)Make a function which calculates "a" raised to power "b" using recursion????

#include<stdio.h>
int p(int a,int b){
    if(b==0) return 1;
    return a*p(a,b-1);
}
int main(){
    int a;
    printf("Enter a base: ");
    scanf("%d",&a);
    int b;
    printf("Enter power: ");
    scanf("%d",&b);
    int x=p(a,b);
    printf("%d raised to power %d=%d\n",a,b,x);
    return 0;
}