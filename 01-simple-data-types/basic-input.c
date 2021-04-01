#include <stdio.h>

int main (){
    char name[31];
    int birthYear;
    int currentYear = 2020;
    int age;

    printf("Whats your name? ");
    scanf("%s", name);

    printf("In which year you were born? ");
    // & is the addres-of operator
    //it allows scanf to change y's value
    scanf("%i", &birthYear);

    // Binary Operators
    // * / + -
    
    // Modulus %
    
    // Unary Operators
    // 25 - -15

    // Increment and Decrement Operators
    // i++ i-- ++i --i
    age = currentYear - birthYear;    

    printf ("Great, %s! You are %i years old.\n",name, age);
    return 0;
}