#include <stdio.h>

int factorial(int value){

    int fact = 1;

    for (int i = value; i > 0; i--)
    {
        // printf("i: %i, value: %i\n", i, fact);
        fact *= i;
    }
    
    return fact;
}


void outputFactorial(int input){

    printf("Result: %i\n", factorial(input));

}

int main(){

    outputFactorial(5);
    return 0;
}
