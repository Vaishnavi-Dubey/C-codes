#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *left, *right;
} node;

node *insert(int data) {
    node *new_node = (node *) malloc(sizeof(node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void inorder(node *node) {
    if (node == NULL)
        return;
    inorder(node->left);
    printf("%d ", node->data);
    inorder(node->right);
}

void preorder(node *node) {
    if (node == NULL)
        return;
    printf("%d ", node->data);
    inorder(node->left);
    inorder(node->right);
}

void postorder(node *node) {
    if (node == NULL)
        return;
    inorder(node->left);
    inorder(node->right);
    printf("%d ", node->data);
}

int main() {
    node *root = insert(10);
    root->left = insert(20);
    root->right = insert(30);
    root->left->left = insert(40);
    root->left->right = insert(50);
    root->right->left = insert(60);
    root->right->right = insert(70);
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
}