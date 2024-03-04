////Im this case we will reversearray in parts but using function??
////there is lot of confusion in index in array so generally array index start with 0 but this thing is only know by coders not by general public so when question say 1 index we consider it as 0 index and if question say 4 index we in code take it as 3 index{very imporatant point}
///Q)Reverse array index 1-4?? but using function??

#include<stdio.h>
void reversearray(int arr[],int si,int ei){ //////si=starting index ;;; ei=ending index
for(int i=si,j=ei;i<j;i++,j--){
        int x=arr[i];
        arr[i]=arr[j];
        arr[j]=x;
}} 

int main(){
    int n;
    printf("Enter the sie of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    reversearray(arr,0,3);  ////we give that index from which we have to reverse ////we can revrse array by this also by putting ei=n-1 
    printf("Array elements after getting reverse in parts: ");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}