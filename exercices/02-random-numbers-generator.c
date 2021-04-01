#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    printf("Rand:\n");
    // RAND will create same sequence of
    // "random" numbers on every program run
    for(int i = 0; i<5; i++) {
        printf(" %d ", rand());
    }

    printf("\nSrand:\n");
    // SRAND will create different sequence of
    // random numbers on every program run
    srand(time(0)); // Use current time as seed for random generator
    for(int i = 0; i<4; i++) {
        printf(" %d ", rand());
    }
    
    printf("\n");
    return 0;
}