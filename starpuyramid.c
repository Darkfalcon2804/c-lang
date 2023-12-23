////WAP to print star pyramid??

/*//Method 1
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int s=1;s<=2*i-1;s++){printf("*");}
 printf("\n");}
 return 0;

}*/
  

 /* //Method-2 isi number se number pyramid print nhii hota 
  #include<stdio.h>
  int main(){
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");}
            for(int k=1;k<=i;k++){
                printf("*");
            }
            for(int s=1;s<=i-1;s++){
                printf(" * ");
            } printf("\n");
    }
    return 0;
      }*/

      ////Method 3    nsp-no of spaces print     nst-no of star 
     /* #include<stdio.h>
      int main(){
        int n;
        printf("Enter the no: ");
        scanf("%d",&n);        
        int nsp=n-1;
        int nst=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=nsp;j++){       ////spaces
                   printf(" ");  }  
            for(int s=1;s<=nst;s++){ printf("*");}   /////star
         nsp--;
         nst+=2;
         printf("\n");
        }
        return 0;
      }*/