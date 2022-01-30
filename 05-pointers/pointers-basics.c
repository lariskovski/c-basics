#include <stdlib.h>
#include <stdio.h>

void main(){
    int vet[3] = {12,22,321};
    int *p = vet; // Same as vet[0]

    for (int i = 0; i < 3; i++)
    {

        // Changes value of vet[1] using the pointer
        if (i == 1)
        {
            *p = 11;
        }

        printf("\nP actual memory addres: %p\nP Referenced variable (vet[%i]) memory address: %p\nP referenced variable (vet[%i]) value:%d", (void*)&p, i, p, i, *p);
        // Example
        // P Referenced variable (vet[0]) memory address: 0x7ffd673c3bac
        // *P referenced variable (vet[0]) value: 12
        // &P actual memory addres: 0x7ffd673c3ba0
        
        p++; // Pointer moves to the next int position
    }
    
}