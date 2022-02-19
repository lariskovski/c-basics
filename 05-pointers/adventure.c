#include <stdio.h>

int main(){
    char starting_point = '.';
    char *hero = &starting_point;
    while(1){
        putchar(*hero);
        fflush(stdout);
        hero++;
    }
}