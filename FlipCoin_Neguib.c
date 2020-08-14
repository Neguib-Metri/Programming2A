/*Neguib Metri DATOS 2°A*/ //C CODE//
// 1. Create a program that uses random number generator to simulate flipping a coin several times. The simulated coin should be fair, meaning that the probability of heads is equal to the probability of tails. Your program should flip simulated coins until either 3 consecutive heads of 3 consecutive tails occur. Display an H each time the outcome is heads, and a T each time the outcome is tails, with all of the outcomes shown on the same line. Then display the number of flips needed to reach 3 consecutive flips with the same outcome. When your program is run it should perform the simulation 10 times and report the average number of flips needed//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {

// I declarate the variables for the code//
int Num=0;
int H3=0;
int T3=0;
int Heads=0;
int Tails=0;
int Consecutive=0;
int coin;

//I make a loop in order to Simulate the program untul we reach 10 simulations//
while (Num!=10){
  Num+=1;
  printf("Simulation Number %d \n",Num);
  H3=0;
  T3=0 ;
  Heads = 0;
  Tails = 0;
  Consecutive = 0;

//I make a lopp in order to determinate wheenver a Head or a tail has succesfully drop 3 consecutive times//  
  while (Consecutive !=3){
      coin = rand() % 2;
      printf("%d",coin);
      if (coin==0){
          printf("T \n");
          Heads += 1;
          H3+=1;
          T3=0;}
      else if(coin ==1){
          printf("H \n");
          Heads += 1;
          T3+=1;
          H3=0;}
      if (T3==3){
        Consecutive=3;
        printf("It has succesful found 3 consecutive Heads \n");} //We print when we reach the 3 consecutive Tails//
      if (H3==3){
        Consecutive=3;
        printf("It has succesful found 3 consecutive Tails \n");} // We print when we reach the 3 consecutive Heads//
  }
  
  // Finally I print out the number of times that the coin flip and what was the result of Heads and Tails//
  printf("Number of Heads: %d \n" , Heads);
  printf("Number of Tails: %d \n" , Tails);
  printf("Total of Flips: %d \n", Heads+Tails);
}
}