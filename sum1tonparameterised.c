//////Q)Wap to print sum from 1 to n(parameterised)??

#include<stdio.h>
void sum(int n,int add)
{
    if(n==0){
        printf("sum=%d\n",add);
        return;
    }
    sum(n-1,add+n);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}