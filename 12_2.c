// Exercise 12-2: Design a structure to store time and date. Write a function to find the difference between two times in minutes //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//As always we define the fuction (of the struct)//
typedef struct{
  char months[10];
  int days;
  int hours;
  int mins;
} 
time;
//Write a Function to show the difference between time1 & time 1//
void showing_dif(time x, time y);
int main(){
  time timeN;
  time timeG;

  //In fuction main I will ask the user for information//
  printf("Month and Year: ");
  fgets(timeN.months,10,stdin);

  //User Information//
  printf("\t\nTime N\n");
  printf("Day: "); scanf("%d",&timeN.days);
  printf("Hour: "); scanf("%d",&timeN.hours);
  printf("Minutes: "); scanf("%d",&timeN.mins);
  
  //User Information//
  printf("\t\nTime G\n");
  printf("Day: "); scanf("%d",&timeG.days);
  printf("Hour: "); scanf("%d",&timeG.hours);
  printf("Minutes: "); scanf("%d",&timeG.mins);
  //Calling our function//
  showing_dif(timeN, timeG);

  return 0;
}
void showing_dif(time x, time y){
  //We create 2 diferente variables for the operation between 2 times// 
  int Ftime;
  int Stime;
  int temp;
  //We must convert everything to one single meauser in this case im converting all to minutes// 
  Ftime= x.mins + (x.hours*60) + (x.days*1440);
  Stime= y.mins + (y.hours*60) + (y.days*1440);
  
  //In this case I'm compering//
  if(Ftime==Stime){
    temp=0;
  }
  else if(Ftime>Stime){
    temp=Ftime-Stime;
  }
  else{
    temp=Stime-Ftime;
  }
  //Finally I'll print the difference in minutes//
  printf("The difference of time in minutes is: %d",temp);
}
