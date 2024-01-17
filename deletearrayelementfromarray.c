//////Q)WAP to delete an array element from array???

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int loc;
    printf("Enter the location you want to delete: ");
    scanf("%d",&loc);
    if(loc>=n+1) {
    printf("Delete not possible\n");
    return 1;
     }
    for(int i=loc-1;i<n-1;i++){arr[i]=arr[i+1];}
    printf("After deleting the element: ");
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
  return 0;
}