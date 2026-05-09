//01_insertion.c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
//insertion after element
void insertAfter(struct Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("the given previous node cannot be NULL");
        return;
    }

    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
//insert before an element
void insertBefore(struct Node** head_ref, struct Node* next_node, int new_data) {
    if (*head_ref == NULL || next_node == NULL) {
        return;
    }

    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = next_node;

    if (*head_ref == next_node) {
        *head_ref = new_node;
        return;
    }

    struct Node* prev = *head_ref;
    while (prev->next != next_node) {
        prev = prev->next;
    }

    prev->next = new_node;
}
//insertion at end
void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
}

void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main() {
    struct Node* head = NULL;

    append(&head, 8);
    append(&head, 9);
    append(&head, 11);
    append(&head, 21);
    append(&head, 7);

    insertAfter(head->next->next, 12);
    insertBefore(&head, head->next, 2);
    append(&head, 23);

    printf("Created Linked List: ");
    printList(head);
    return 0;
}