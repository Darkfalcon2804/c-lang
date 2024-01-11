/////Q)Calculate the product of all the elements int the given array???

#include<stdio.h>
int main(){
    int n,product=1;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    int x=sizeof(arr)/sizeof(int);
    printf("Enter the elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    printf("The product of elements in array: %d\n",product);
    return 0;
}