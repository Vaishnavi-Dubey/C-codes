//01_linked list.c
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

void printlist(struct node*n){
    while(n!=0){
        printf("%d", n -> data);
        n -> next;
    }

int main(){
    struct node *head, *second, *third;
    head = NULL;
    second = NULL;
    third = NULL;
    head =(struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    head -> next = second;
    head -> data = 8;
    second -> next = third;
    second -> data = 9;
    third -> next = NULL;
    third -> data = 10;
    printlist (head);

    return 0;
}

}