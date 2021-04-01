#include <stdio.h>
#include <stdbool.h>

int main (){

    int minHeight = 3;
    int maxHeight = 15;
    int height;
    
    printf("Choose a height for the pyramid from %i-%i blocks: ", minHeight, maxHeight);
    scanf("%i", &height);

    int backgroundBlocks = height;

    if(height <= maxHeight && height >= minHeight) {
        for (int pyramidBlocks = 1; pyramidBlocks <= height; pyramidBlocks++, backgroundBlocks--)
        {
            printf("%.*s", backgroundBlocks, "___________________________________");
            printf("%.*s", pyramidBlocks, "=================");
            printf("%.*s", pyramidBlocks, "=================");
            printf("%.*s\n", backgroundBlocks, "___________________________________");
        }
    }

    return 0;
}