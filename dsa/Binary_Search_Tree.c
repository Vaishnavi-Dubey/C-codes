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

node *insert(node *tree, int ele) {
    if (tree == NULL) {
        return creation(ele);
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
        printf("%d ", tree->data);
        inorder(tree->right);
    }
}

node *minvaluenode(node *tree) {
    node *current = tree;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

node *delete(node *root, int ele) {
    if (root == NULL) return root;
    //find node to be deleted
    if (ele < root->data) {
        root->left = delete(root->left, ele);
    } else if (ele > root->data) {
        root->right = delete(root->right, ele);
    } else {
        //if node is having only one child or no child
        if (root->left == NULL) {
            node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            node *temp = root->left;
            free(root);
            return temp;
        } else if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        } else {
            //if node has two chldren
            node *temp = minvaluenode(root->right);
            //place the inorder successorin position of node to be deleted
            root->data = temp->data;
            root->right = delete(root->right, temp->data);
        }
    }
}

int main() {
    node *root = NULL;
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 4);
    printf("Inorder traversal: ");
    inorder(root);
    printf("\nAfter deleting 10\n");
    root = delete(root, 10);
    printf("Inorder traversal: ");
    inorder(root);
}