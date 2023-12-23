// //If the ages of Ram,Shyam,Ajay are input through the keyboard write a program to determine the youngest of the three??(using nested)

// #include<stdio.h>
// int main(){
//     int Ram;
//     printf("Enter the age of Ram:  ");
//     scanf("%d",&Ram);
//     int Shyam;
//     printf("Enter the age of Shyam:  ");
//     scanf("%d",&Shyam);
//     int Ajay;
//     printf("Enter the age of Ajay:   ");
//     scanf("%d",&Ajay);
//     //We are firstly using multiple condition
//     if(Ram<Shyam && (Shyam<Ajay || Ajay<Shyam)) printf("Ram is the Youngest one"); //Ram<Shyam<Ajay
//     if(Shyam<Ram && (Ram<Ajay || Ajay<Ram)) printf("Shyam is the youngest one");//Shyam<ram<Ajay
//     if(Ajay<Ram && (Ram<Shyam || Shyam<Ram) ) printf("Ajay is the youngest one");//Ajay<Ram<Shyam 
// return 0;}