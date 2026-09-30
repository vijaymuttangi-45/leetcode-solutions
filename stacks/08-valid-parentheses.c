#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char* s) {
    int n = strlen(s);
    char stack[10001];
    int top = -1;

    for (int i = 0; i < n; i++) {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            // Push opening bracket onto stack
            stack[++top] = c;
        } else {
            // It's a closing bracket - check if stack is empty first
            if (top == -1) {
                return false;
            }

            char lastOpen = stack[top];
            top--;

            if (c == ')' && lastOpen != '(') return false;
            if (c == '}' && lastOpen != '{') return false;
            if (c == ']' && lastOpen != '[') return false;
        }
    }

    // Valid only if all brackets were matched (stack is empty)
    return top == -1;
}

int main() {
    // ---- Test Case 1: Typical case - valid ----
    char test1[] = "()[]{}"; 
    printf("Test 1: %s (expected: 1)\n", isValid(test1) ? "1" : "0");

    // ---- Test Case 2: Edge case - invalid mismatched order ----
    char test2[] = "(]";
    printf("Test 2: %s (expected: 0)\n", isValid(test2) ? "1" : "0");

    // ---- Test Case 3: Edge case - unmatched closing bracket ----
    char test3[] = "]";
    printf("Test 3: %s (expected: 0)\n", isValid(test3) ? "1" : "0");

    return 0;
}
