/**
 * Master Linked List Implementation in C.
 * Demonstrates: Insertion (Head/Tail/Pos), Deletion, Search, and Reversal.
 * Time Complexity: Insert/Delete O(1) or O(N), Search O(N).
 * Compile: gcc -Wall -o linked_list 03-Data-Structures/linked_list_master.c
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// --- Operations ---

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtHead(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void reverseList(struct Node** head) {
    struct Node *prev = NULL, *current = *head, *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

void deleteNode(struct Node** head, int key) {
    struct Node *temp = *head, *prev = NULL;
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);
}

int main() {
    struct Node* head = NULL;
    
    printf("Inserting elements at head: 10, 20, 30\n");
    insertAtHead(&head, 10);
    insertAtHead(&head, 20);
    insertAtHead(&head, 30);
    display(head);

    printf("Reversing list...\n");
    reverseList(&head);
    display(head);

    printf("Deleting node with value 20...\n");
    deleteNode(&head, 20);
    display(head);

    return 0;
}
