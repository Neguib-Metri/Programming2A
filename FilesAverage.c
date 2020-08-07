/*Neguib Metri Datos 2A*/ 
//Exercise #1, Get the average of a list//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Declaring my variables//
    float num; //numerical variable//
    char string[100]; //File content//
    float sum=0; // it will save each numerical item//
    float average=0; // It'll cotain the avergae//

   //in order to acces te file I create a pointer also i put the NULL; however we will assing a file later..//
    FILE *ptr_add=NULL;
    FILE *ptr_ave=NULL;
    //assining the address//
    
  ptr_add=fopen("C:\\Users\\negui\\Desktop\\programming\\Unit2\\Leer.txt","r");
    
    //now we should create new files//
    ptr_ave=fopen("Escribir.txt","w");
    
    //we verify the file//
    if(ptr_add==NULL){
        printf("I cannot access to the file.\n");
        return 1;
    }
    //we verify the file//
    if(ptr_ave==NULL){
        printf("I cannot access to the file\n");
        return 1;
    }
    
    while(feof(ptr_add)==0){ //This will check whether it's reach the end// 
        fscanf(ptr_add,"%s %f",&string,&num); //Save values//
        printf("%s %.2f\n",string,num); //Print the values//
        sum=sum+num; //In order to obtain the average we ADD all the numbers.
    }
    average=sum/8; // the sum divided by eight//
    fprintf(ptr_ave,"The average is: %.2f\n",average); 
    // we write the result//
    
    //Moreover has been working with the files our final task is to close those files//.
    fclose(ptr_add);
    fclose(ptr_ave);
return 0;
}
