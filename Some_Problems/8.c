//Insertion in a Linked List
//case1 :- insert at the begining  --> O(1)
//case2 :- insert in between       --> O(n)
//case3 :- insert at the end       --> O(n)
//case4 :- insert after a node     



#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};


void linkedListTraversal(struct Node *ptr);
struct Node * insertAtFirst(struct Node *head, int data);


int main() {
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    //allocates memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    //Link first and second Nodes
    head->data = 4;
    head->next = second;

    //Link second and third nodes
    second->data = 23;
    second->next = third;

    //Link third and fourth nodes
    third->data = 45;
    third->next = fourth;

    //Terminate the list at the fourth node
    fourth->data = 89;
    fourth->next = NULL;


    printf("Before : \n");
    //printing
    linkedListTraversal(head);

    printf("\n\n");
    head = insertAtFirst(head, 50);

    printf("After : \n");
    linkedListTraversal(head);

    return 0;
}

void linkedListTraversal(struct Node *ptr) {
    while (ptr != NULL) {
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct Node * insertAtFirst(struct Node *head, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
