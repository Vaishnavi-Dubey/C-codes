#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *left, *right;
} node;

node *delete(node *tree, int ele) {
    if (tree == NULL) return NULL;
    else if (ele < tree->data) tree->left = delete(tree->left, ele);
    else if (ele > tree->data) tree->right = delete(tree->right, ele);
    else {
        if (tree->left == NULL && tree->right == NULL) return NULL;
        else if (tree->left == NULL) return tree->right;
        else if (tree->right = NULL) return tree->left;
        else {
            int min = rightmost(tree->left);
            tree->data = min;
            tree->left = delete(tree->left, min);
        }
        return tree;
    }
}

int rightmost(node *tree) {
    while (tree->right != NULL) {
        tree = tree->right;
    }
    return tree->data;
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

int main() {

}