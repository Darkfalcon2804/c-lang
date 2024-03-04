////reverse path of array by not using extra array??

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
    // int i=0;
    // int j=n-1;
    // while(i<j){int temp =arr[i];  ///////this is for while loop
    // arr[i]=arr[j];
    // arr[j]=temp;
    // i++;j--;}
    for(int i=0,j=n-1;i<=j;i++,j--){
        int x=arr[i];
        arr[i]=arr[j];
        arr[j]=x;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}