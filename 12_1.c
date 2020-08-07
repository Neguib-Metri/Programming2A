//** Exercise 12-1: Design a structure to hold the data for a mailing list. Write a function to print out the data**// 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//First we need to create the Function)

typedef struct{
  char User[50];
  char Mail[50];
  char Uni[50];
}data;

void showing_data(data x, data y); //then the function that will shown the data on the screen// 

int main(){
  data userA;
  data userB;
  //Asking to user
  printf("\tUSER A\n");
  printf("Name: ");
  fgets(userA.User,50,stdin);
  printf("Univerisity: ");
  fgets(userA.Uni,50,stdin);
  printf("Email: ");
  fgets(userA.Mail,50,stdin);

  //in the fuction main I'm asking for the information to the user//
  printf("\n\tUSER B\n");
  printf("Name: ");
  fgets(userB.User,50,stdin);
  printf("Univerisity: ");
  fgets(userB.Uni,50,stdin);
  printf("Email: ");
  fgets(userB.Mail,50,stdin);

  //We are calling our function//
  showing_data(userA,userB);

  return 0;
}
//The function that will print out on the screen//
void showing_data(data x, data y){ 

  printf("\n\tUserA\n");
  printf("Your Name is: %s", x.User);
  printf("Your Univerisity: %s",x.Uni);
  printf("Your Email: %s", x.Mail);
  printf("\n\tUserB\n");
  printf("Your Name is: %s", y.User);
  printf("Your Univerisity: %s",y.Uni);
  printf("Your Email: %s", y.Mail);
}
