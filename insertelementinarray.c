/////Q)Wap to insert an element in array???

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
    int loc;
    printf("Enter the location where you want to insert element: ");
    scanf("%d",&loc);
    if( loc<1 || loc>n){printf("Insert of element not possible\n");
    return 1;}
    int x;
    printf("Enter the number you want to insert in array: ");
    scanf("%d",&x);
    for(int i=n-1;i>=loc-1;i--){
        arr[i+1]=arr[i];
    }
    arr[loc-1]=x;
    n++;
    printf("Element %d inserted at position %d.\n", x, loc);
    printf("Array elements after inserting : ");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}


