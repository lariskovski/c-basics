#include <stdio.h>
#include <stdbool.h>

int main (){

    // int grades[] =  {1,4,2,5,3};
    char favFood[50]; // static array

    printf("Whats your favorite food (one word? ");
    scanf("%49s", favFood);
    printf("%s\n", favFood);

    int charCount = 0;

    while (favFood[charCount] != '\0')
    {
        charCount++;
    }
    
    printf("Char count: %i\n", charCount);

    return 0;
}