#include <stdio.h>
#include <stdbool.h>

int main (){

    int lines;
    int columns;
    
    printf("Choose how many stores: ");
    scanf("%i", &lines);
    getchar()/
    printf("Choose how many apartment blocks per store: ");
    scanf("%i", &columns);


    for (int i = 0; i <= lines; i++)
    {
        printf("\n");
        for (int k = 0; k <= columns; k++)
        {
        printf("%.*s", lines, "|_|");
        }
        
    }

    printf("\n");
    return 0;
}