#include <stdio.h>
int lower(int c){
    return(c >= 'A' && c <= 'Z') ? (c + 'a' - 'A'): c;
}
int main(){
    char str[] = "ANTONY maina";
    for(int i =0; str[i] != '\0'; i++){
        str[i] = lower(str[i]);
    }
    printf("%s\n", str);
    return 0;
}