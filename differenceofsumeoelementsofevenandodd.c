//////Q)find the differences b/w the sum of elements at even indices to the sum of elements at odd indices??

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int evenindices=0;
    int oddindices=0;
    for(int i=0;i<n;i++){
        if(i%2==0) evenindices+=arr[i];
        else oddindices+=arr[i];
    } printf("The sum of elements ofeven indices=%d\n",evenindices);
     printf("The sum of elements of odd indices=%d\n",oddindices);
     printf("The difference between sum of elements of even indices and the sum of elements of odd indices=%d\n",evenindices-oddindices);
     return 0;
}