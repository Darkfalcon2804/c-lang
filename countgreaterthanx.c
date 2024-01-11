///////Q)Count the number of elements in given array greater than a given number x???

#include<stdio.h>
int main(){
    int n, count =0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("The number of elements in array greater then %d is ",x);
    for(int i=0;i<n;i++){
        if(x<arr[i]) count++;
       
    } printf("%d\n",count);
    return 0;
    }
