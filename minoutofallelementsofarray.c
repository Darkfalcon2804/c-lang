//////Q)Find the min value out of all the elements in the array??

//////method 1:-by taking first element as min
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){ min=arr[i];}
    }
    printf("The min element of array: %d\n",min);
    return 0;
}*/

////method 2:- by introducing new library and min=int_max
#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){ min=arr[i];}
    }
    printf("The min element of array: %d\n",min);
    return 0;
}