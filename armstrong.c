#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int ld,count=0,AS=0,t;
    t=n;
    while(n>0){
        ld=n%10;
        n/=10;
        count++;
    } 
    n=t;
   while(n>0){
    ld=n%10;
    AS+=pow(ld,count);
    n/=10;
   }
   if(AS==t) printf("Arm strong\n");
   else printf("No is not arm strong");
   return 0;
}