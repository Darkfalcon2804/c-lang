////Q) Write a program to check if number is composite or not??

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++) ////i=2 beecause 1 is the factor of every number
    { if(n%i==0) printf("%d Composite number",n);
    break;
    }
    return 0;

}