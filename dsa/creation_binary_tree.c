#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *left, *right;
} node;

node *creation(int data) {
    node *temp = (node *) malloc(sizeof(node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void inorder(node *tree) {
    if (tree != NULL) {
        inorder(tree->left);
        printf("%d", tree->data);
        inorder(tree->right);
    }
}

void preorder(node *tree) {
    if (tree != NULL) {
        printf("%d", tree->data);
        preorder(tree->left);
        preorder(tree->right);
    }
}

void postorder(node *tree) {
    if (tree != NULL) {
        postorder(tree->left);
        postorder(tree->right);
        printf("%d", tree->data);
    }
}
