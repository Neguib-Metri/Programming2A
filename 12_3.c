//Exercise 12-3: Design an airline reservation data structure that contains the following data//
//Flight number//
//Originating airport code (three characters)//
//Destination airport code (three characters)//
//Starting time//
//Arrival Time//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// First thing we have to do is to create our fuction//.
typedef struct{
 char Flynum[50];
 char Origin[10];
 char Destination[10];
 char Startingtime[10];
 char Arrivaltime[10];
} 
flight;

//Function to show the data of the Flights//
void Dataofthe_Fly(flight g);

int main(){
  flight flightN;

  //Asking to user
  printf("\tWonderful young traveler welcome this is Neguipo's Airline\n\n");
  printf("Flight number: ");
  fgets(flightN.Flynum,50,stdin);
  printf("Originating airport code or Name : ");
  fgets(flightN.Origin,10,stdin);
  printf("Destination airport code or Name: ");
  fgets(flightN.Destination,10,stdin);
  printf("Starting time: ");
  fgets(flightN.Startingtime,10,stdin);
  printf("Arrival Time: ");
  fgets(flightN.Arrivaltime,10,stdin);

  //We are calling our function//
  Dataofthe_Fly(flightN);

  printf("\n\nIt was a pleasure to have had your presence on this wonderful flight, thank you very much for making Neguipo's Airline your preference.");

  return 0;
}
void Dataofthe_Fly(flight g){
  printf("\t\n\nYour flight was saved\n\n");
  printf("Flight number: %s",g.Flynum);
  printf("Originating airport code/Name: %s",g.Origin);
  printf("Destination airport code/Name: %s",g.Destination);
  printf("Starting time: %s",g.Startingtime);
  printf("Arrival Time: %s",g.Arrivaltime);
}
