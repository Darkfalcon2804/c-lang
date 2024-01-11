////Q)Calculate the sum of all the elements in the given array???

#include<stdio.h>
int main(){
    int n;
    int sum =0;
    printf("Enter total no of array: ");
    scanf("%d",&n);
    int arr[n];
    int x=sizeof(arr)/sizeof(int);
    printf("Size of an array=%d\n",x);
    printf("Enter the elements of  array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    for(int i=0;i<n;i++){
         sum+=arr[i];
    }
    printf("%d",sum);
 return 0;
}

