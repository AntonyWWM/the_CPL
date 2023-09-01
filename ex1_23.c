#include <stdio.h>

int main() {
    int c;
    int in_comment = 0; // 0 if not in a comment, 1 if in a single-line comment, 2 if in a multi-line comment
    int in_string = 0;  // 0 if not in a string, 1 if in a string
    int prev_char = EOF;

    while ((c = getchar()) != EOF) {
        if (!in_comment) {
            if (c == '/' && prev_char != '\\') {
                int next_char = getchar();
                if (next_char == '*') {
                    in_comment = 2;  // Start of a multi-line comment
                } else if (next_char == '/') {
                    in_comment = 1;  // Start of a single-line comment
                } else {
                    putchar(c);
                    if (next_char != EOF) {
                        putchar(next_char);
                    }
                }
            } else if (c == '\'' && !in_string) {
                in_string = 1;
                putchar(c);
            } else if (c == '\'' && in_string) {
                in_string = 0;
                putchar(c);
            } else if (c == '"' && !in_string) {
                in_string = 1;
                putchar(c);
            } else if (c == '"' && in_string) {
                in_string = 0;
                putchar(c);
            } else {
                putchar(c);
            }
        } else if (in_comment == 1 && c == '\n') {
            in_comment = 0;  // End of a single-line comment
            putchar(c);
        } else if (in_comment == 2 && c == '*') {
            int next_char = getchar();
            if (next_char == '/') {
                in_comment = 0;  // End of a multi-line comment
            } else if (next_char == EOF) {
                break;  // End of file before the end of a multi-line comment
            }
        }
        prev_char = c;
    }

    return 0;
}
