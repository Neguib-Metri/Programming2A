#include <stdio.h>
#include <ctype.h>

//Fuction to find nonwhite character//

char *nonewhite(char *string);

int main(){
	char string[] = "  Neguipo is the best";
  
	printf("The 1st nonewhite character is '%c'\n",  *nonewhite(string)); //We call our function to show the first character//


	return 0;
}

char *nonewhite(char *string){
	while (*string != '\0') {
		if (! isspace(*string))
			return string;
		++string;
	}
	return string;
}
