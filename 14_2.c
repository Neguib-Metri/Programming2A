//Exercise 14-2: Write a program to copy a file, expanding all tabs to multiple spaces// -NeguibMetri 

#include <stdio.h>
#include <stdlib.h>

int main(){
    //First of all we must create a pointer variable to save our file and to access to it//

    //Assigning the value "NULL" anyway it's irrelevant because I will assign a file//
    FILE *ptr_file=NULL;
    FILE *ptr_copy=NULL;
    
    //Here,we put the file address//
    ptr_file=fopen("C:\\Users\\negui\\Desktop\\programming\\Unit2\\leer.txt","r"); 
    
    ptr_copy=fopen("Escribir.txt","w"); //Here we create a new file in writing mode// //Once created it'll be rewritten//
    
    //We will verify the file//
    if(ptr_file==NULL){ 
        printf("Cannot access to the 1st file.\n");
        return 1;
    }
    if(ptr_copy==NULL){
        printf("Cannot access to the 2nd file .\n");
        return 1;
    }
    int ng; // This (ng) will indicate the current position
    while (1){
        ng = fgetc(ptr_file); // assign the text content as a string//
        if (ng == EOF){ // when (ng) reach the file it will come out of loop-while//
           break;
        }
        if (ng =='\t'){ // if (ng) is equal to tab (\t), it will write(*)//
          fputc('*',ptr_copy); //(fputc) it write a character to the file, it receives two parameters//
          fputc('*',ptr_copy); // the character to write and the file variable //
        }
        else{ // If (ng) is different to tab (\t), it will put the same character//
            fputc(ng,ptr_copy);
        }
    }
    fclose(ptr_file);
    fclose(ptr_copy); //we does have to close de text files//
return 0;
}
