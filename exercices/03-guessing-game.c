#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// =====================================================================
// Simples number guessing game based on Caleb Curry C course on Youtube.
// Generates a random value, asks for player input until the guess is
// right or the player quits (-1).
// ======================================================================

int main (){

    int playerGuess;
    int randomNumber;
    int maxRandValue = 5; // Sets range max value

    // Seed rand
    srand(time(0));
    randomNumber = rand() % maxRandValue + 1; // Module trick to range rand values

    while (true) // Infinite play loop
    {
        printf("Guess a number 0-%i or -1 to quit: ", maxRandValue);
        scanf("%i", &playerGuess);

        // Check if guess is whitin range
        if(playerGuess <= maxRandValue && playerGuess >= 0 ){

            if(playerGuess == randomNumber) {
                printf("You got it!\n");
                return 0;
            }else{
                printf("Aw, you didn't get it :( \n");
            }

        // Check if the player still wants to play
        }else if (playerGuess == -1){
            printf("Quitting. The right answer was: %i \n", randomNumber);
            return 0;
        }
        else{
            printf("You are out of range. Range: 0-%i\n", maxRandValue);
        }
    }

}