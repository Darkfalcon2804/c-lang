    //////Q)Give an integer n.Create an array containig squares of all natural numbers till n and print the elements of the array?????

  #include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        arr[i-1]=i*i;
    }
    printf("The array which contain squares of all natural no til %d is ",n);
        for(int i=0;i<n;i++){
            printf("%d  ",arr[i]);
        }
    return 0;
    }
