#include <stdio.h>

int any(char s1[], char s2[]){
    int i, j;
    for(i=0; s1[i] != '\0'; i++){
        for(j=0; s2[j] != '\0'; j++){
            if (s1[i] == s2[j]){
                return i;
            }
        }
    }
    return -1;
}
int main(){
    char s1[] = "abcdef";
    char s2[] = "xyz";

    int result = any(s1, s2);
    if (result != -1){
        printf("First matching character found at index %d\n", result);
    } else {
        printf("No matching characters found\n");
    }
    return 0;
}