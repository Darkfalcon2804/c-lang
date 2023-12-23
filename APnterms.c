// ////display 1,3,5,7,9 upto n terms???

// ////method1-using maths 
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number of terms: ");
//     scanf("%d",&n);
//     for(int i=1;i<=2*n-1;i+=2)
//     printf("%d",i);
//     return 0;
// }

//// method 2-without using maths 
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        a=a+2;
    }
    return 0;
}