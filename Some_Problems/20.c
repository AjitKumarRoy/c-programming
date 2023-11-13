//Write a program to copy single linked list to another



#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr) {
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct Node* copyList(struct Node *head) {
    if (head == NULL) {
        return NULL; // Return NULL for an empty list
    }

    struct Node *newList = (struct Node *)malloc(sizeof(struct Node));
    struct Node *newHead = newList;
    struct Node *current = head;

    newList->data = current->data;
    newList->next = NULL;
    current = current->next;

    while (current != NULL) {
        newList->next = (struct Node *)malloc(sizeof(struct Node));
        newList = newList->next;
        newList->data = current->data;
        newList->next = NULL;
        current = current->next;
    }

    return newHead;
}

int main() {
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 36;
    third->next = NULL;

    printf("Original List: ");
    linkedListTraversal(head);

    // Copy the linked list
    struct Node *newList = copyList(head);

    printf("Copied List: ");
    linkedListTraversal(newList);

    return 0;
}
