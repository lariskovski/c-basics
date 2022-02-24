#include <stdio.h>

// passing by pointer example

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

}

int main(){
    int x = 10;
    int y = 99;

    printf("Before\nX: %d - Y: %d\n", x, y);

    swap(&x, &y);

    printf("After\nX: %d - Y: %d\n", x, y);
}
