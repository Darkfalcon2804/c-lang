//////Q)Wap to copy the contents of one array into another in reverse order???

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter  the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[n];
     printf("The elements of second array are: ");
     for(int i=0;i<n;i++){
        arr2[i]=arr[n-1-i]; }
for(int j=0;j<n;j++){
       printf("%d  ",arr2[j]);}
   return 0;
} 