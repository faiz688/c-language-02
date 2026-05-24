#include <stdio.h>

int main() {
    int a;
    char ch='a'; 
    ch = 'b'; 
    ch = '\r'; // represents a carriage return
    printf("hello how are you? %c\n",ch); // prints a new line after the message
    //double dash '--' is used to indicate a comment in some programming languages, but in C, it is not a valid operator or syntax. If you try to use '--' in C, it will result in a compilation error. In C, you can use '//' for single-line comments and '/* */' for multi-line comments.
    //after using the escape sequence, the cursor will return to the beginning of the line, and the next output will overwrite the existing text on that line. In this case, "hello how are you?" will be overwritten by "hello how are you?" again, but since the cursor is at the beginning of the line, it will appear as if nothing has changed. The output will be:
    //we can add multiple cursors by holding 'Alt' key and clicking at different places in the code to edit multiple lines simultaneously
    
    return 0;
}