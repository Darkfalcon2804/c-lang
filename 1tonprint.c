//////Q)print 1 to n using recursion???
/*method 1=Using extra parameter???
#include<stdio.h>
void print(int n,int x){
    if(n>x) return ;
    printf("%d\n",n);
    print(n+1,x);
}
int main(){
    int n;
    printf("Enter a  number: ");
    scanf("%d",&n);
    print(1,n);
    return 0;
}*/
////Method 2=without using extra parameter??

#include<stdio.h>
void print(int n){
    if(n==0) return ;
    print(n-1);
    printf("%d\n",n);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    print(n);
    return 0;
}