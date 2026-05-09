#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max_size 100
int stack[max_size];
int top = -1;

//function to check the precedence of the operator
int precedence(char operator) {
    switch (operator) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

//function to check if the scanned character is operator or not
int isOperator(char ch) {
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') {
        return 1;
    }
    return 0;
}

void push(int item) {
    if (top >= max_size - 1) {
        printf("Stack is Overflow");
    }
    stack[++top] = item;
}

int pop() {
    if (top < 0) {
        printf("stack is Underflow");
        exit(1);
    }
    return stack[top--];
}

void infix_to_postfix(char infix[], char postfix[]) {
    int i, j;
    char symbol;
    for (i = 0, j = 0; infix[i] != '\0'; i++) {
        symbol = infix[i];
        if (symbol == '_' || symbol == '\t') {
            continue;
        }
        if (symbol == '(')
            push(symbol);
        else if (symbol == ')') {
            while (stack[top] != '(') {
                postfix[j++] = pop();
            }
            pop();
        } else if (isOperator(symbol)) {
            while (precedence(symbol) <= precedence(stack[top])) {
                postfix[j++] = pop();
            }
            push(symbol);
        } else {
            postfix[j++] = symbol;
        }
    }
    while (top != -1) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}

int main() {
    char infix[max_size], postfix[max_size];
    printf("Enter infix expression");
    fgets(infix, max_size, stdin);
    infix_to_postfix(infix, postfix);
    printf("Postfix Expression: %s", postfix);
}