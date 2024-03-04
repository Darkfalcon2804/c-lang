 ////To do rotate array we need to learn reverse array in parts 
 ////there is lot of confusion in index in array so generally array index start with 0 but this thing is only know by coders not by general public so when question say 1 index we consider it as 0 index and if question say 4 index we in code take it as 3 index{very imporatant point}
///Q)Reverse array index 1-4??
 #include<stdio.h>
 int  main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=3;i<=j;i++,j--){
        int x=arr[i];
        arr[i]=arr[j];
        arr[j]=x;
    }
    printf("Reverse array of index 1-4= ");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
 }