#include <stdio.h>

int main (){

    int level;
 
    printf("Whats your level: ");
    scanf("%i", &level);

    switch (level)
    {
    case 0:
        printf("Junior level!\n");
        break;
    
    case 1:
        printf("Mid level!\n");
        break;

    case 2:
        printf("Senior level!\n");
        break;


    default:
        printf("Trainee Default level!\n");
        break;
    }

}