#include <stdio.h>

struct user
{
    char name[50];
    int age;
};


int main(){

    struct user larissa = { {"larissa"}, 24};

    printf("User name: %s\nUser Age: %d\n", larissa.name, larissa.age);

    return 0;
}
