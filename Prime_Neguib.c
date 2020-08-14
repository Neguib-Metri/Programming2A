/*Neguib Metri Datos 2°A*/ 
//Excercise #2 Write a program that reads an integer from the user. If the value entered by the user is less than 2 then your program should display an appropriate error message. Otherwise, your program should display the prime numbers that can be multiplied together to compute n,with one factor appearing on each line.//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
//Defining my 2 variables//
     int NumNeg = 2;
     int Div = 2; 

     printf("Introduce a Number for Prime Factors :"); //Asking the number to find the Prime Factors//
     scanf("%d", &NumNeg);

     if(NumNeg < 2){ // the condition will be used only if the user put a number less tan 2 because it isn't a prime number.
         printf("Your number is less than 2, in order to found the Prime Factor it has to be bigger than ");
     }
     while ( NumNeg >= Div ){ //In order to obtain the factors we desing the fuction to finde the prime factors//
          while ( NumNeg % Div == 0 ) { 
              printf("%d x ",Div);
              NumNeg = NumNeg / Div;
          }
          Div ++; 
     } // Finally We well print all the factors of the number separtly//
     printf("%d",NumNeg); 

}