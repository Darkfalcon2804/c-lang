// //////Q)WAP to print permutations??
// ////permutations

// #include<stdio.h>
// int fact(int n){
//     int f=1;
//     for(int i=1;i<=n;i++)
//      f*=i;
//      return f;
//      }
//     int npr(int n,int r){
//         return fact(n)/(fact(n-r));
//     }
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int r;
//     printf("Enter the r: ");
//     scanf("%d",&r);
//     int permutation=npr(n,r);
//     printf("The permutation of %d wrt %d is %d",n,r,permutation);
//     return 0;
// }