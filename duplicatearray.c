//////Wap to find a duplicate element from a given array of integers???

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
    if(arr[i]==arr[j]){
        printf("%d is duplicate element\n",arr[i]);
    }
        }
}
return 0;}