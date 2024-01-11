/////Q)Find the second largest (distinct) element in array???

////Method 1=by taking first element as min this method will give error when smallest element is on 0 index
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("The elements of array: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int min=arr[0];
//     for(int i=0;i<n;i++){
//         if(min>arr[i]) min=arr[i]; 
//     }
//     printf("Minimum element=%d\n",min); 
//     int smax=arr[0];
//     for(int i=0;i<n;i++){
//         if (arr[i]!=min &&smax>arr[i]) smax=arr[i];
//     } printf("Second smallest element=%d\n",smax);
//     return 0;
 //}

////method 2-By introducing new library and mix=intmian 

#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("The elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i]) min=arr[i]; 
    }
    printf("Minimum element=%d\n",min); 
    int smax=INT_MAX;
    for(int i=0;i<n;i++){
        if (arr[i]!=min &&smax>arr[i]) smax=arr[i];
    } printf("Second smallest element=%d\n",smax);
    return 0;
}

