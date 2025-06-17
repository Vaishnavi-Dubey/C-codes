#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} node;

node *push(node *top, int n) {
    node *ptr = (node *) malloc(sizeof(int));
    ptr->data = n;
    ptr->next = NULL;
    if (top == NULL) {
        top = ptr;
    } else {
        ptr->next = top;
        top = ptr;
    }
    return top;
}

node *pop(node *top) {
    if (top == NULL) {
        printf("Underflow");
        return NULL;
    } else {
        node *t = top;
        top = top->next;
        free(t);
        return top;
    }
}

void traverse(node *top) {
    node *t = top;
    while (t != NULL) {
        printf("%d ", t->data);
        t = t->next;
    }
}

int main() {
    int len, data;
    node *top;
    top = NULL;
    printf("Enter the size of stack:");
    scanf("%d", &len);
    for (int i = 1; i <= len; i++) {
        printf("Enter the data of stack:");
        scanf("%d", data);
        top = push(top, data);
    }
    printf("\nData in Stack\n");
    traverse(top);
    top = pop(top);
    printf("\nNew Data in Stack\n");
    traverse(top);
}