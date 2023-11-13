//Delete a node with a given value

//Deleting the element at a given index in linked list

//Deletion in a Linked List
//cases :
//case 1 --> Deleting the first node  --> O(1)
//case 2 --> Deleting a node in between
//case 3 --> Deleting the last node 
//case 4 --> Delete a node with a given value


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};


void linkedListTraversal(struct Node *ptr);
struct Node * deleteAtValue(struct Node * head, int value);




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
    head = deleteAtValue(head, 23);

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


struct Node * deleteAtValue(struct Node * head, int value) {
    struct Node * p = head;
    struct Node * q = head->next;
     
    while(q->data != value && q->next != NULL) {
        p = p->next;
        q = q->next;
     }

     if (q->data == value) {
        p->next = q->next;
        free(q);
     }

     return head;
}

