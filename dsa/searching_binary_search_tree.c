#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *left, *right;
} node;

node *search(node *root, int num) {
    if (root == NULL)
        return NULL;
    if (num == root->data)
        return root->data;
    if (num < root->data)
        return search(root->left, num);
    if (num > root->data)
        return search(root->right, num);
}
