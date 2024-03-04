//////Q)Search element and tells its all position at it is present???

//////method1)By normal method
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements of array: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]); }
//     int x;
//     printf("Enter the element you want to search in array: ");
//     scanf("%d",&x);
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             printf("%d is present in the array and its position is %d\n",x,i+1);
//         }
//         if(i==n-1) printf("%d Not exist",x);
//     }
// return 0;
// }

//////method 2)by bool method
#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int idx=0;////idx=index print kar na ka liya
     int x;
     printf("Enter the element you want to search in array: ");
     scanf("%d",&x);
     bool flag= false; //////element not present
     for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag=true;
            idx=i+1;
            printf("On this position is %d is present %d\n",x,idx);
        }
     }
     if(flag==false){printf("%d is not present in the array\n",x);}
     else {
        printf("%d is present in the array\n",x);
     }
     return 0;
}

