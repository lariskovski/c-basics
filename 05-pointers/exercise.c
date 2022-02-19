#include <stdio.h>

void add2(char *pointer);


void main(){
    char a = 'x';
    // char *a_ptr = &a;
    char *a_ptr = &a;
    add2(a_ptr);

    printf("a: %c", a);

}

void add2(char *pointer){
    *pointer = (*pointer) + 2;
}