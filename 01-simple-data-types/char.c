#include <stdio.h>

int main(){
    // chars use single quotes
    char ascii;
    int number;

    printf("Please enter a character: ");
    scanf("%c", &ascii);
    printf("%i\n", ascii);

    printf("Please enter a number (1-127): ");
    scanf("%i", &number);
    printf("%c\n", number);

    return 0;
}