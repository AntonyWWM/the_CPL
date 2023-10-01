#include <stdio.h>
#include <ctype.h>

int htoi(const char *s) {
    int result = 0;
    int base = 16; // Hexadecimal base

    // Skip optional "0x" or "0X" prefix
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        s += 2;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]); // Convert to lowercase for case insensitivity
        if (isdigit(c)) {
            result = result * base + (c - '0');
        } else if (c >= 'a' && c <= 'f') {
            result = result * base + (c - 'a' + 10);
        } else {
            // Invalid character encountered
            fprintf(stderr, "Invalid character '%c' encountered.\n", s[i]);
            return -1; // You can handle this error differently if needed
        }
    }

    return result;
}

int main() {
    const char *hexString = "0x1A3"; // Example hexadecimal string
    int result = htoi(hexString);
    
    if (result != -1) {
        printf("The decimal equivalent of %s is %d\n", hexString, result);
    }
    
    return 0;
}
