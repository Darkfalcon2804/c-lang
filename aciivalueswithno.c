////QWAP to print the ascii values and their equivalent characters of 26 alphabets ???


#include<stdio.h>
int main(){
    for(int i=64;i<=90;i++){
        printf("%d = %c\n",i,i);
    }
   for(int j=97;j<=122;j++){
    printf("%d=%c\n",j,j);
   }
   for(int s=0;s<=9;s++){
    printf("%d=%c\n",s,s);
   }
  return 0;}