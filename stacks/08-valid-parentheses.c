#include <stdio.h>
#include <stdbool.h>

bool isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        // Opening brackets go onto the stack
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            top++;
            stack[top] = s[i];
        }

        // Closing brackets
        else {
            // No opening bracket to match
            if (top == -1) {
                return false;
            }

            char open = stack[top];
            top--;

            if ((s[i] == ')' && open != '(') ||
                (s[i] == ']' && open != '[') ||
                (s[i] == '}' && open != '{')) {
                return false;
            }
        }
    }

    // Stack must be empty
    return top == -1;
}

int main() {

    // Test Case 1
    char s1[] = "()[]{}";

    printf("Test Case 1: %s\n",
           isValid(s1) ? "true" : "false");


    // Test Case 2 - Invalid brackets
    char s2[] = "(]";

    printf("Test Case 2: %s\n",
           isValid(s2) ? "true" : "false");

    return 0;
}