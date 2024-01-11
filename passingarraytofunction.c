#include<stdio.h>
void change(int x[]){x[2]=90;}
int main(){
    int arr[]={5,2,7,8,3};
    int n=sizeof(arr)/sizeof(int);
    printf("%d\n",arr[2]);
    change(arr);
    printf("%d\n",arr[2]);
    return 0;
}