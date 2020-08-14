/*Neguib Metri DATOS 2°A*/ 
//Excercise #3; Write a program that computes the perimeter of a polygon. It should read pairs of x and y values until the user enter a blank line for the x-coordinate. Then, it should display the total perimeter. //

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//We include all the libraries we're going to use//

int main(void) {
  float dist; //we define the distance//
  printf("This program computes the perimeter of the polygon.");
  int x;
   int y;
  int x1;
   int y1;
  int tempx,tempy;
   float perimetro=0;
   printf("Introduce a coordenate in format: (x,y)\n");
    scanf("(%d,%d)", &x,&y); //we storage the coodinates//
    tempx=x;
    tempy=y; //we temporary save the coordinates that the user input// 
   while(x!=0){ // we create a loop in order to accept all coordinates from the user until he brake the loop//
    printf("Introduce a coordenate in format: (x,y)\n");
    scanf(" (%d,%d)", &x1,&y1);

    dist=sqrt(((x1-x)*(x1-x))+((y1-y)*(y1-y))); //We use the formula of distance between dots//
   // printf("(%d,%d)\n",x,y);
    perimetro +=dist;
    
    x=x1;
    y=y1;
    //we storage the values//
   
    }
    
x1=tempx;
y1=tempy;
printf("Final Coordinate (%d,",x);
printf("%d)\n",y);
printf("Initial Coordinate: (%d,",x1);
printf("%d)\n",y1);
dist=sqrt(((x1-x)*(x1-x))+((y1-y)*(y1-y)));
 perimetro +=dist;
 printf("The perimeter is: %f",perimetro); //we output the perimeter//
}