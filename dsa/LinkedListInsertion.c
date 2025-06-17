#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void linkedlistTraversal(struct node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *InsertAtBeginning(struct node *head, int data) {
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct node *InsertAtEnd(struct node *head, int data) {
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;

    while (p->next != NULL) {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct node *InsertAtIndex(struct node *head, int data, int index) {
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;

    while (i != index - 1) {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main() {
    struct node *head;
    struct node *second;
    struct node *third;

    //allocate memory for the linked list in the heap
    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));

    //link first and second nodes
    head->data = 7;
    head->next = second;

    //link second and third nodes
    second->data = 11;
    second->next = third;

    //terminate the list at the third node
    third->data = 66;
    third->next = NULL;

    printf("Linked List before Insertion\n");
    linkedlistTraversal(head);
    printf("\nLinked list after insertion\n");
    //head = InsertAtBeginning(head, 56);
    // head = InsertAtIndex(head, 56, 1);
    head = InsertAtEnd(head, 56);
    linkedlistTraversal(head);
    return 0;
}