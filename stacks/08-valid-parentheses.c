#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isValid(char* s) {
    int len = strlen(s);
    // Allocate a stack of size equal to string length
    char* stack = (char*)malloc(len * sizeof(char));
    int top = -1;
    
    for (int i = 0; i < len; i++) {
        char c = s[i];
        
        // If it's an opening bracket, push to stack
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } 
        // If it's a closing bracket
        else {
            // If stack is empty or brackets don't match, it's invalid
            if (top == -1) {
                free(stack);
                return false;
            }
            
            char topChar = stack[top--];
            if ((c == ')' && topChar != '(') ||
                (c == '}' && topChar != '{') ||
                (c == ']' && topChar != '[')) {
                free(stack);
                return false;
            }
        }
    }
    
    // If stack is empty, all brackets were matched successfully
    bool result = (top == -1);
    free(stack);
    return result;
}