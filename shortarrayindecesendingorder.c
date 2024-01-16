//////Q)WAP to short array element in decesending order??

#include<stdio.h>
int main(){
    int n,x;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("The elements of array: ");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    } 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
            x=arr[i];
            arr[i]=arr[j];
            arr[j]=x;
            }
        }
    }
    printf("Sorting element in decesending order: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}