//03_linked list.c
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void prtlist(struct node *n)
{
    while(n!=NULL){
        printf("%d ",n->data);
        n=n->next;
    }
}
int main()
{
    struct node *head,*s,*t;
    head=NULL;
    s=NULL;
    t=NULL;
    head = (struct node*)malloc(sizeof(struct node));
    s = (struct node*)malloc(sizeof(struct node));
    t = (struct node*)malloc(sizeof(struct node));
    head->next=s;
    head->data=8;
    s->next=t;
    s->data=9;
    t->next=NULL;
    t->data=8;
    prtlist(head);
}
