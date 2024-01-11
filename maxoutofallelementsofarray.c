//////Q)Find the max value out of all the elements int the array??
/*//////method 1 by taking first element as max  
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    int x=sizeof(arr)/sizeof(int);
    printf("Enter the elements of array: ");
   for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     int max=arr[0];
     for(int i=0;i<n;i++){
        if(arr[i]>max) {max=arr[i];}
     }
     printf("Maximum elements=%d\n",max);
     return 0;
}*/


//////method 2by introducing new library and max=intmin  
#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
   for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     int max=INT_MIN;
     for(int i=0;i<n;i++){
        if(arr[i]>max) {max=arr[i];}
     }
     printf("Maximum elements=%d\n",max);
     return 0;
}
