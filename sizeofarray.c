#include<stdio.h>
int main(){
    int arr[]={3,5,6,5,4,5,4,5,8,9,7,10,12,11,14,15,16};
    printf("%lu\n",sizeof(arr));
     int n=sizeof(arr)/sizeof(int);
     printf("%d\n",n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}