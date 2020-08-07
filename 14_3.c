  /* Neguib Metri Datos 2A*/ 
// Exercise 14-3: Write a program that reads a file containing a list of numbers, and then writes two files, one with all numbers divisible by three and another containing all the other numbers. //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    //in order to access to our files we must create a pointer// 
    
    FILE *ptr_num_list=NULL;
    FILE *ptr_div=NULL;
    FILE *ptr_not_div=NULL;
    
    ptr_num_list=fopen("C:\\Users\\negui\\Desktop\\programming\\Unit2\\leer.txt","r"); //Here, we will assign the address//
    
    ptr_div=fopen("Divisible.txt","w"); //now I wil open new files in writing mode therfore it's created, the next time the phrase will be rewritten//
    ptr_not_div=fopen("Not_Divisible.txt","w");
   
    //we verify the file//
    if(ptr_num_list==NULL){
        printf("I cannot access to the 1st file.\n");
        return 1;
    }
    //we verify the file//    
    if(ptr_div==NULL){
        printf("I cannor acces to the 2nd file.\n");
        return 1;
    }
    //we verify the file//
    if(ptr_not_div==NULL){
        printf("I cannot access to the 3rd file.\n");
        return 1;
    }
    char content[100]; //It'll take into the file//
    int number; //Save numercial data//
    while(fgets(content,100,ptr_num_list) !=0 ){ // It will read a string from a file and if it is equal to (0), it'll go to the bottom//
        printf("%s",content); //Printing the string with each numerical element//
        sscanf(content,"%d",&number); // We save the numerical elements to (number).
        if(number%3==0){ // if number is divisible, we save it within other file.txt.
            fprintf(ptr_div,"%d\n",number); // it write the numerical elements within new file.
        }
        else{
            fprintf(ptr_not_div,"%d\n",number); // if it is not divisible we save it within other File.
        }
    }

    //After working with the files we must close them//
    fclose(ptr_num_list);
    fclose(ptr_div);
    fclose(ptr_not_div);
return 0;
}
