#include <stdio.h>
#include <string.h>

//We must have to creat our function//
void convert_str(char string[]);

int main(){
  char string[15]; //I will ask for text//
  printf("Enter a string: ");
  fgets(string,15,stdin);

  printf("Your string is: %s",string); //the code will check the string//
  convert_str(string); //Now it's time to call our function//
  printf("New string: %s",string);

  return 0;
}
void convert_str(char string[]){
  int i;
  int string_size=strlen(string);

  for(i=0; i<=string_size; i++){
    string[i]=0;
  }
}
