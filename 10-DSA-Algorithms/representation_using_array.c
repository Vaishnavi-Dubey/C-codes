#include<stdio.h>

char tree[10];

int root(char key) {
    if (tree[0] != '\0') {
        printf("Tree is already having root");
    } else {
        tree[0] = key;
    }
    return 0;
}

int left_child(char key, int parent) {
    if (tree[parent] == '\0') {
        printf("\nCannot set child at %d,no parent found", (parent * 2) + 1);
    } else {
        tree[(parent * 2) + 1] = key;
    }
    return 0;
}

int right_child(char key, int parent) {
    if (tree[parent] == '\0') {
        printf("\nCannot set child at %d,no parent found", (parent * 2) + 2);
    } else {
        tree[(parent * 2) + 2] = key;
    }
    return 0;
}

int print_tree() {
    printf("\n");
    for (int i = 0; i < 10; i++) {
        if (tree[i] != '\0') {
            printf("%c", tree[i]);
        } else {
            printf("-");
        }
        printf(" ");
    }
    return 0;
}

int main() {
    root('A');
    left_child('B', 0);
    right_child('C', 0);
    left_child('D', 1);
    right_child('E', 1);
    left_child('F', 2);
    print_tree();
    return 0;
}