//Implement the file or code compression using Huffman’s algorithm
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char data;
    unsigned frequency;
    struct Node *left, *right;
};
struct PriorityQueueNode {
    struct Node *data;
    struct PriorityQueueNode *next;
};

struct Node *newNode(char data, unsigned frequency) {
    struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
    temp->left = temp->right = NULL;
    temp->data = data;
    temp->frequency = frequency;
    return temp;
}

struct PriorityQueueNode *newPriorityQueueNode(struct Node *data) {
    struct PriorityQueueNode *temp = (struct
            PriorityQueueNode *) malloc(sizeof(struct PriorityQueueNode));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int compare(struct PriorityQueueNode *a, struct PriorityQueueNode *b) {
    return (a->data->frequency > b->data->frequency);
}

struct Node *buildHuffmanTree(char data[], int frequency[], int size) {
    struct Node *left, *right, *top;
    struct PriorityQueueNode *priorityQueue = NULL;
    for (int i = 0; i < size; ++i) {
        insertPriorityQueue(&priorityQueue, newNode(data[i], frequency[i]));
    }

    while (size > 1) {
        left = extractMin(&priorityQueue);
        right = extractMin(&priorityQueue);
        top = newNode('$', left->frequency + right->frequency);
        top->left = left;
        top->right = right;
        insertPriorityQueue(&priorityQueue, top);
    }
    return extractMin(&priorityQueue);
}

void insertPriorityQueue(struct PriorityQueueNode **head, struct Node *
data) {
    struct PriorityQueueNode *temp = newPriorityQueueNode(data);
    temp->next = *head;
    *head = temp;
}

struct Node *extractMin(struct PriorityQueueNode **head) {
    struct PriorityQueueNode *temp = *head, *prev = NULL;
    struct Node *data;
    if (!temp)
        return NULL;
    if (!temp->next) {
        *head = NULL;
        data = temp->data;
        free(temp);
        return data;
    }
    while (temp->next) {
        if (compare(temp, temp->next)) {
            if (prev)
                prev->next = temp->next;
            else
                *head = temp->next;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    data = temp->data;
    free(temp);
    return data;
}

void printCodes(struct Node *root, int arr[], int top) {
    if (root->left) {
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }
    if (root->right) {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }
    if (!root->left && !root->right) {
        printf("%c: ", root->data);
        for (int i = 0; i < top; ++i)
            printf("%d", arr[i]);
        printf("\n");
    }
}

void huffmanCoding(char data[], int frequency[], int size) {
    struct Node *root = buildHuffmanTree(data, frequency, size);
    int arr[size];
    int top = 0;
    printf("Huffman Codes:\n");
    printCodes(root, arr, top);
}

int main() {
    char data[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int frequency[] = {5, 9, 12, 13, 16, 45};
    int size = sizeof(data) / sizeof(data[0]);
    huffmanCoding(data, frequency, size);
    return 0;
}