#include <stdio.h>
#include <math.h>

int main (){

    int bitrhYear;
    int currentAge;
    int currentYear = 2021;
    int legalAge = 18;

    printf("- Grown Ups Bar Entrance -\nState your brith year: ");
    scanf("%i", &bitrhYear);

    currentAge = currentYear - bitrhYear;

    if(currentAge < 110 && currentAge > 10){
        if(currentAge >= legalAge){
            printf("Please come in.\n");
        } else{
            printf("Come back in %i years.\n", legalAge - currentAge);
        }
    }else{
        printf("Please provide your real brith year.\n");
    }
}