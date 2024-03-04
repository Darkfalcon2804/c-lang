//////Q)Rotate the given array 'a' by K steps where K is non negative ???
////Note:==>K can be greater than n as well where n is the size of array 'a'.
// /*steps to rotate array
// 1)if(k>n)then k=k%n
// 2)reverse(arr,0,n-1)
// 3)reverse(arr,0,k-1)
// 4)reverse(0,k,n-1)
// */
#include<stdio.h>
void reverse( int arr[],int si,int ei){//////si=starting index ;;; ei=ending index
for(int i=si,j=ei;i<j;i++,j--){
  int x=arr[i];
  arr[i]=arr[j];
  arr[j]=x;
}

}
int main(){
    int n;
    printf("Enter the size of array: ");  
    scanf("%d",&n);
    int k;
    printf("Enter the number by which you want to rotate the array: ");
    scanf("%d",&k);
    int arr[n];
    printf("Enter the elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
  if(k>n) k%=n;  //////to simplfy rotation
  reverse(arr,0,n-1);//////to reverse whole array
  reverse(arr,0,k-1);//////to reverse front part of array 
  reverse(arr,k,n-1);//////to reverse back part of array
    printf("Elements after rotating element: ");
  for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
  }
  return 0;
}