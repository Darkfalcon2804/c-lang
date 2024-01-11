//////Q)Search for an element in array???
////Method 1=by without using libaray function
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter./,,/, the size array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter number you want search in array: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x) {printf("%d Exist in array\n",x); 
        break;}
        if(i==n-1) printf("%d Not exist in array\n",x);
    }
    return 0;
}*/


//////Method 2=By using bool libaray function 
#include<stdio.h>
#include<stdbool.h>
int main(){
     int n;
    printf("Ente the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);}
        int x;
    printf("Enter number you want search in array: ");
    scanf("%d",&x);
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){flag=true;
        break;}
    }
    if(flag==true) printf("%d Exists in array\n",x);
    else printf("%d Not exists in array\n",x);
    return 0;
}
