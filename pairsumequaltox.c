//////Q)Find the total number of pairs in the array whose sum is equal to the given value?

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
    int x;
    printf("Enter the number with you want to compare: ");
    scanf("%d",&x);
    int count=0;
    for(int i=0;i<n;i++) {
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==x) count++;
    }
        }    
        printf("The total no pairs are:%d\n ",count);
        return 0;
}