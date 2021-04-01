#include <stdio.h>

int main (){
    // implicit conversion - promotion
    // doesnt lose data
    float x = 50.0f;
    printf("%f\n", x); // printf takes a double

    // explict type casting
    // loses data
    int friends = 2;
    int slices = 17;
    double halfPizza = slices / (double) friends;
    printf("%f\n", halfPizza);
    return 0;
}