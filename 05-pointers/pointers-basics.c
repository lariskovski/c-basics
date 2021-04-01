#include <stdio.h>

int main(){


    // =============================
    //          POINTERS
    // =============================
    int x = 5; // Alocated at 0x5F1A
    int *p = &x; // Points to 0x5F1A

    printf("Initial X Variable: %i\nPointer: %i\n", x, *p);
    printf("Reassinging pointer to value 6.\n");
    *p = 6;
    printf("Variable: %i\nPointer: %i\n\n\n", x, *p);

    // =============================
    //         NOT POINTERS
    // =============================
    int y = 5; // Alocated at 0x5F1A
    int np = y; // Gets value stored at 0x5F1A and allocated it in another address

    printf("Initial Y Variable: %i\nNot a Pointer: %i\n", y, np);
    printf("Reassinging np to value 6.\n");
    np = 6;
    printf("Variable: %i\nNot a Pointer: %i\n", y, np);


    return 0;
}
