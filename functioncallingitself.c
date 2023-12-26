//////Function calling itself???


#include<stdio.h>
void greet(int n){
    if(n==0) return;
    printf("GOOD MORNING\n");
    greet(n-1);
}

int main(){
 greet(3);
      return 0;
}