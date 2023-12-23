////Q)WAP to swap two number??
////method 1==with third variable
/*#include<stdio.h>
int main(){
    int x;
    printf("Enter your first number: ");
    scanf("%d",&x);
    int y;
    printf("Enter your second number: ");
    scanf("%d",&y);
     printf("The number given by users are %d %d\n",x,y);
     int z;
     z=x;
     x=y;
     y=z;
     printf("After swaping numbers are %d %d\n",x,y);
     return 0;
}*/


////method 2- without variable
#include<stdio.h>
int main(){
    int x;
    printf("Enter your first number: ");
    scanf("%d",&x);
    int y;
    printf("Enter your second number: ");
    scanf("%d",&y);
     printf("The number given by users are %d %d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swaping numbers are %d %d\n",x,y);
    return 0;
}