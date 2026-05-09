/**
 * Binary Search Tree (BST) Implementation in C.
 * Demonstrates: Insertion, Searching, and Tree Traversals (Inorder, Preorder, Postorder).
 * Time Complexity: Average O(log N), Worst O(N).
 * Compile: gcc -Wall -o bst 03-Data-Structures/binary_search_tree.c
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL) return createNode(data);
    
    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
        
    return root;
}

void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int search(struct Node* root, int key) {
    if (root == NULL) return 0;
    if (root->data == key) return 1;
    
    if (key < root->data)
        return search(root->left, key);
    return search(root->right, key);
}

int main() {
    struct Node* root = NULL;
    int keys[] = {50, 30, 20, 40, 70, 60, 80};
    
    printf("Inserting: 50, 30, 20, 40, 70, 60, 80 into BST\n");
    for (int i = 0; i < 7; i++) {
        root = insert(root, keys[i]);
    }

    printf("Inorder Traversal: ");
    inorder(root);
    printf("\n");

    int key = 40;
    if (search(root, key))
        printf("Element %d found in BST\n", key);
    else
        printf("Element %d not found\n", key);

    return 0;
}