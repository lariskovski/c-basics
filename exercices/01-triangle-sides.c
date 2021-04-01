#include <stdio.h>
#include <math.h>

int main (){

    double a;
    double b;
    double result;

    printf("give the two sides of the triangle: ");

    scanf("%lf", &a);
    scanf("%lf", &b);
    
    result = sqrt(pow(a, 2) + pow(b, 2));

    printf("%f\n", result);
    return 0;
}