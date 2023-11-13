//Count the occurrences of specific item in singly linked list.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to count occurrences of a specific item
int countOccurrences(struct Node* head, int key) {
    int count = 0;
    struct Node* current = head;

    while (current != NULL) {
        if (current->data == key) {
            count++;
        }
        current = current->next;
    }

    return count;
}

int main() {
    struct Node* head = NULL;
    // Create the linked list
    // Code to populate the linked list goes here...

    // Example data population for demonstration
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head = first;
    first->data = 4;
    first->next = second;
    second->data = 5;
    second->next = third;
    third->data = 4;
    third->next = NULL;

    // Count occurrences of 4 (change 4 to the desired value)
    int key = 4;
    int occurrences = countOccurrences(head, key);

    printf("The item %d appears %d times in the linked list.\n", key, occurrences);

    return 0;
}
