////Print n to 1 using recursion??


#include<stdio.h>
void print(int n){
    if(n==0) return;
       printf("%d\n",n);
       print(n-1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    print(n);
    return 0;
}