#include <stdio.h>
#include <stdbool.h>

int main (){

    int count;

    while(true){ 
        printf("- Loop Gen Counter- ");
        scanf("%i", &count);

        for (int i = 1; i <= count; i++)
        {
            printf("%i\n", i);
        }
    }
}