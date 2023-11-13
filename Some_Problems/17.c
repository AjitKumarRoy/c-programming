//Write a program to sort the single linked list.


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node* ptr) {
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void sortLinkedList(struct Node* head) {
    if (head == NULL) {
        printf("Empty List.\n");
        return;
    }

    struct Node* current = head;
    struct Node* index = NULL;
    int temp;

    while (current != NULL) {
        index = current->next;

        while (index != NULL) {
            if (current->data > index->data) {
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
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

    printf("Before Sorting: ");
    linkedListTraversal(head);

    sortLinkedList(head);

    printf("After Sorting: ");
    linkedListTraversal(head);

    return 0;
}
