#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    char charset[] = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWYXZ";

    char *Password;

    int lenght;
    int var;

    abc:
    printf("ENTER THE LENGHT OF THE PASSWORD: ");
    scanf("%d", &lenght);
    printf("SPECIAL CHARACTERS? (0/1): ");
    scanf("%d", &var);

    if(var != 1 && var != 0 ){
    	printf("ERROR\n");
    	goto abc;
	}

    Password = (char *)calloc(lenght, sizeof(char));
    
    srand((unsigned)time(NULL));
    
    if(var == 1){
       char charset[] = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWYXZ-_.!#$&?*%~@+";
    	
       for(int i = 0; i < lenght; i++) {
       Password[i] = charset[rand() % 75];
    }
	}
	
    else{
       for(int i = 0; i < lenght; i++) {
       Password[i] = charset[rand() % 62];
    }
    }

    printf("\nPASSWORD: \n");
    printf("\n %s \n", Password);
    
    system("pause");
    return 0;
    }