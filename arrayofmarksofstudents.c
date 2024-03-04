//////Q)Give an array of marks of students if the mark of any student less then 35  print its roll no[roll no here refers to the index of the array]???

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the marks of students: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<35) printf("The roll no of student:%d\n",i+1);

    }
    return 0;

}