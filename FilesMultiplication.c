/*Neguib Metri Datos 2A*/ 
//Exercise #2: multiply two columns as dot point//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int N; // declaring my 1st numerical variable.
    int G; // declaraing my 2nd numerical variable.
//in order to acces te file I create a pointer also i put the NULL; however we will assing a file later..//
    FILE *file=NULL;
    FILE *mult=NULL;

    file=fopen("C:\\Users\\negui\\Desktop\\programming\\Unit2\\leer.txt","r"); //Assingning the address//
//now we should create new files//
    mult=fopen("Escribir.txt","w");
    
    //I will verify the file//
    if(file==NULL){
        printf("We cannot access to the file!.\n");
        return 1;
    }
     //I will verify the file//
    if(mult==NULL){
        printf("We cannot access to the file!.\n");
        return 1;
    }
    while(feof(file)==0){ //It'll verify if it's already has reach the end//
        
        fscanf(file,"%d %d",&N,&G); // we save our values//
        printf("%d %d\n",N,G); //We print the variles//
        fprintf(mult,"%d\n",N*G); //we write the multiplication//
    }
    //Moreover has been working with the files our final task is to close those files//.
    fclose(file);
    fclose(mult);
return 0;
}
