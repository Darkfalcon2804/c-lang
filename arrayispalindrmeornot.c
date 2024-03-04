//////Q)If an array contains n elements then check if the given array is a palindrome or not???

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int arr2[n];
    for(int i=0;i<n;i++){
        arr2[i]=arr[n-1-i];
    }
    for(int i=0;i<n;i++)
{    if(arr2[i]==arr[i]){ printf("Array is a palindrome\n");
break;}
else {printf("Array is not a palindrome\n"); 
break;}}
  return 0;
}