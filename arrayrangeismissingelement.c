//////QGiven an array containing elements from 1 to n except one element in this range is missing.Find the missing element???

// #include<stdio.h>
// int main(){
//   int n;
//   printf("Till what you want to cointain element: ");
//   scanf("%d",&n);
//   int sum=0;
//   int arr[n];
//   printf("Enter the element of array: ");
//   for(int i=0;i<n-1;i++){
//     scanf("%d",&arr[i]);
//   }
//   for(int i=0;i<n-1;i++){
//     sum+=arr[i];
//   }
//   int sum2=(n*(n+1))/2;  //////n terms ka total sum nikal na ka yeh fomula hote hai 
//   int x=sum2-sum;
// printf("The missing element is:%d\n",x);
// return 0;
// }


////////agar 1 to 10ka liya hota hai toh:-
#include<stdio.h>
int main(){
  int n=10;
  int sum=0;
  int arr[]={1,2,3,4,5,6,7,8,9};
  printf("The elements of array: ");
  for(int i=0;i<9;i++){
    printf("%d\n",arr[i]);}
	for(int i=0;i<9;i++){
    sum+=arr[i];
  }
  int sum2=(n*(n+1))/2;  //////n terms ka total sum nikal na ka yeh fomula hote hai 
  int x=sum2-sum;
printf("The missing element is:%d\n",x);
return 0;
}


