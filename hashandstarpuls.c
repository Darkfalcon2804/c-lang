///////Q)Wap to print given pattern / hashandstarpuls????

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int mid=n/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==mid || j==mid) printf("*  ");
            else printf("#  ");
        }
        printf("\n");
    }
    return 0;
}