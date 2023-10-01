#include <stdio.h>
#include <stdbool.h>

#define MAX_STACK_SIZE 1000

char stack[MAX_STACK_SIZE]; // Stack to keep track of delimiters
int top = -1; // Top of the stack

// Function to push a character onto the stack
void push(char c) {
    if (top < MAX_STACK_SIZE - 1) {
        stack[++top] = c;
    } else {
        printf("Stack overflow.\n");
    }
}

// Function to pop a character from the stack
char pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        return '\0';
    }
}

int main() {
    int c;
    bool in_string = false;
    bool in_single_quote = false;
    bool in_comment = false;

    while ((c = getchar()) != EOF) {
        if (c == '"') {
            if (!in_single_quote && !in_comment) {
                in_string = !in_string;
            }
        } else if (c == '\'') {
            if (!in_string && !in_comment) {
                in_single_quote = !in_single_quote;
            }
        } else if (!in_string && !in_single_quote) {
            if (c == '/' && getchar() == '*') {
                in_comment = true;
            } else if (c == '*' && getchar() == '/') {
                in_comment = false;
            }

            if (!in_comment) {
                if (c == '(' || c == '[' || c == '{') {
                    push(c);
                } else if (c == ')' || c == ']' || c == '}') {
                    char popped = pop();
                    if ((c == ')' && popped != '(') ||
                        (c == ']' && popped != '[') ||
                        (c == '}' && popped != '{')) {
                        printf("Syntax error: Mismatched delimiter '%c'.\n", c);
                        return 1;
                    }
                }
            }
        }
    }

    if (top >= 0) {
        printf("Syntax error: Unmatched delimiter '%c'.\n", stack[top]);
        return 1;
    }

    if (in_string || in_single_quote || in_comment) {
        printf("Syntax error: Unclosed string, character constant, or comment.\n");
        return 1;
    }

    printf("No syntax errors found.\n");
    return 0;
}
