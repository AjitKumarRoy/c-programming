//Write a program to search an element from the given linked list.


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int searchElement(struct Node* head, int key) {
    struct Node* current = head;
    int index = 0;

    while (current != NULL) {
        if (current->data == key) {
            return index; // Return the index where the element is found
        }
        current = current->next;
        index++;
    }

    return -1; // Return -1 if the element is not found
}

void linkedListTraversal(struct Node* ptr) {
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 5;
    third->next = NULL;

    printf("Linked List : ");
    //printing the elements in linked list by calling linkedListTraversl function
    linkedListTraversal(head);

    int keyToFind = 3;

    int index = searchElement(head, keyToFind);

    if (index != -1) {
        printf("Element %d found at index %d in the list.\n", keyToFind, index);
    } else {
        printf("Element %d not found in the list.\n", keyToFind);
    }

    return 0;
}
