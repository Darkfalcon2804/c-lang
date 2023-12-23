////Q)WAP to print the product of all digits of a given no???
 
 #include<stdio.h>
 int main(){
    int no,p,r;  ////p=product r=last digit  
    printf("Enter number: ");
    scanf("%d",&no);
    p=1;
    while(no>0){
        r=no%10;
        p*=r;
        no/=10;
  }  printf("Product of number of digits=%d",p);
    return 0;
 }