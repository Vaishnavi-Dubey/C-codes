#include<stdlib.h>
#include<stdio.h>

typedef struct Node {
    int data;
    struct Node *left, *right;
} node;

node *insert(node *tree, int ele) {
    if (tree == NULL) {
        tree = (node *) malloc(sizeof(node));
        tree->data = ele;
        tree->left = NULL;
        tree->right = NULL;
    } else if (ele < tree->data) {
        tree->left = insert(tree->left, ele);
    } else {
        tree->right = insert(tree->right, ele);
    }
    return tree;
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

int sum(node *tree) {
    if (tree == NULL)
        return 0;
    else
        return tree->data + sum(tree->left) + sum(tree->right);
}