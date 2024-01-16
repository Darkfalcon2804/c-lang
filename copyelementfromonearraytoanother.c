//////Q)Wap to copy the element of one array to another array??

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:  ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[n];
     printf("The elements of second array:");
    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
        printf("%d  ",arr2[i]);
    }
    return 0;
}