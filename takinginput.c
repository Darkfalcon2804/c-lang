#include<stdio.h>
int main(){
    int arr[3];
    printf("Enter the elements of array: ");
    for(int i=0;i<3;i++){   ////input
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<3;i++){    ////output
        printf("%d ",arr[i]);
     }
    return 0;
 }