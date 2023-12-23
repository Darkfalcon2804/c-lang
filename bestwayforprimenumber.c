// ////Q)WAP to check if a number is prime or not???

// #include<stdio.h>
// #include<stdbool.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     bool flag=true; //// 1 in computer language means true and for using bool we need use header file which is #include<stdbool.h>
//     for(int i=2;i<=n/2;i++){ ////i=2 b/c 1 is factor of evry number i=n/2 mostly higest factor is n/2
//         if(n%i==0){
//             flag=false;////0 in computer language means false and for using bool we need header file which is #include<stdbool.h>
//          break;
//         }
//     }        
//     if(n==1) printf("%d is Neither prime nor composite",n);
//     else if (flag==true) printf("%d is prime",n);   
//     else printf("%d is composite",n);
//     return 0;
// }