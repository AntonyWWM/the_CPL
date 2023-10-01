#include <stdio.h>
#include <string.h>
#define MAX_LINE_LENGTH 1000  // Maximum length of input line
#define FOLD_COLUMN 80        // Column number to fold lines

int main() {
    char line[MAX_LINE_LENGTH];
    char folded_line[MAX_LINE_LENGTH * 2]; // A buffer for folded lines
    
    while (fgets(line, sizeof(line), stdin)) {
        int len = strlen(line);
        int last_non_blank = -1; // Index of the last non-blank character
        
        // Find the last non-blank character before the fold column
        for (int i = 0; i < len && i <= FOLD_COLUMN; i++) {
            if (line[i] != ' ' && line[i] != '\t' && line[i] != '\n') {
                last_non_blank = i;
            }
        }
        
        if (last_non_blank == -1) {
            // No non-blank characters found before fold column, just print the line
            printf("%s", line);
        } else if (len <= FOLD_COLUMN) {
            // Line is within the fold column, print it as is
            printf("%s", line);
        } else {
            int folded_len = 0;
            
            // Copy characters up to the last non-blank before fold column
            for (int i = 0; i <= last_non_blank; i++) {
                folded_line[folded_len++] = line[i];
            }
            
            folded_line[folded_len++] = '\n';
            
            // Copy remaining characters with indentation for the new line
            int spaces_added = 0;
            for (int i = last_non_blank + 1; i < len; i++) {
                if (line[i] != ' ' && line[i] != '\t') {
                    folded_line[folded_len++] = line[i];
                    spaces_added = 0;
                } else {
                    spaces_added++;
                    if (folded_len + spaces_added > FOLD_COLUMN) {
                        folded_line[folded_len++] = '\n';
                        spaces_added = 0;
                    }
                }
            }
            
            folded_line[folded_len] = '\0'; // Null-terminate the folded line
            printf("%s", folded_line);
        }
    }
    
    return 0;
}
