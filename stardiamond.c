////Q)WAP to print star diamond????
//// method 1: not the best method
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");}
            for(int k=1;k<=i;k++){
                printf("*");
            }
            for(int s=1;s<=i-1;s++){
                printf("*");
            }
            printf("\n");
    }
    for(int i=1;i<=n-1;i++){
        for(int s=1;s<=i;s++) printf(" ");
        for(int j=1;j<=7-(2*i);j++) printf("*");
    printf("\n");}
    return 0;
}*/

//////Method 2: Best method

#include<stdio.h>
int main(){
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);
    int nsp=n/2;
    int nst=1;
    int mid=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++) printf(" ");
        for(int k=1;k<=nst;k++) printf("*");
    if(i<mid){
        nsp--;
        nst+=2;
    }   
    else{
        nsp++;
        nst-=2;
    }
    printf("\n");
     }
     return 0;}
