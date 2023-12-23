// ////Take input percentage of a student and print the grade according to marks:-
// ////1)81-100 very good
// ////2)61-80 good
// ////3)41-60 Average 
// ////4)<=40 Fail
// //solution-
// #include<stdio.h>
// int main(){
//     int percent;
//     printf("Enter the percentage:  ");
//     scanf("%d",&percent);
// ////firstly using multiple condition 
//    // if(percent>=81 && percent<=100) printf("Very good");
//     //if(percent>=61 && percent<=80) printf("Good");
//     //if(percent>=41 && percent<=60) printf("Average");
//     //if(percent<=40) printf("Fail");

//     ////Now using nested
//    // if(percent>=81) printf("Very good");
//     //else{////percent<=80
//       //  if(percent>=61) printf("Good");
//         //else {////percent<=61
//         //if(percent>=41) printf("Average");
//         //else ////percent<=40
//         //printf("Fail"); 
//         //}
//          //}

//          //// Now we are using else if method
//          if(percent>=81) printf("Very good ");
//          else if (percent>=61) printf("Good");
//          else if (percent>=41) printf("Average");
//          else if (percent<=40) printf("Fail"); 
        
//         return 0;

// }