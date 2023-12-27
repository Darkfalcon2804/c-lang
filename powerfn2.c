///////Q)WAP to print power function (logarithmic)???

#include<stdio.h>
int p(int a,int b){
if(b==1) return a;
int c=b/2;
if(b%2==0){
return p(a,c)*p(a,c);
}
if(b%2!=0){
    return p(a,c)*p(a,c)*a;
}}
int main(){
    int a;
    printf("Enter a base: ");
    scanf("%d",&a);
    int b;
    printf("Enter a power: ");
    scanf("%d",&b);
    int x= p(a,b);
    printf("%d raised to %d=%d\n",a,b,x);
    return 0;
}