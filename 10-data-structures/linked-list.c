#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* link;
};

struct LinkedList {
    struct Node* head;
    int size;
};

struct LinkedList* create(){
    struct LinkedList* new_list = (struct LinkedList*) malloc(sizeof(struct LinkedList));
    // When malloc goes wrong it returns NULL
    // Initialize a new empty linked list
    if (new_list != NULL)
    {
        new_list->head = NULL; // Same as (*new_list).head 
        new_list->size = 0;
    };

    return new_list;

};

bool isempty(struct LinkedList* linkedlist) {
    assert(linkedlist != NULL);
    if (linkedlist->head == NULL) {
        return true;
    } else {
        return false;
    }
}

void main(){
    struct LinkedList* test_list = create();
    if (isempty(test_list) == true) {
        printf("\nOk, empty list\n");
    } else {
        printf("\noops, not empty list\n");
    }
};