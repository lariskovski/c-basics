#include <stdio.h>

int main (){
    // forcing a float
    //printf("%f\n", 1.66F);
    printf("How many dogs you have met? ");
    // Scientific notation
    // 2500 = 2.5e4
    double dogs;
    scanf("%lf", &dogs);
    printf("%f\n%e\n%g\n", dogs, dogs, dogs);

    /* Conversion charactesrs
    %f decimal notation
    %e scientific notation
    %g computer decides 
    %s strings
    %i integer
    */
    return 0;
}