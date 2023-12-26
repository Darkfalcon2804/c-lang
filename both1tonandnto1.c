///////Q)Both nto1 and 1 to n??

#include<stdio.h>
void print(int n){
    if(n==0) return;
    printf("%d\n",n);
    print(n-1);
     printf("%d\n",n);
}
int main(){
    int n;
    printf("Enter a number:  ");
    scanf("%d",&n);
    print(n);
    return 0;
}