#include<stdio.h>

void squeeze(char s1[], char s2[]){
    int i,j,k;
    int match;

    for(i=j=0; s1[i] != '\0'; i++){
        match = 0;
        for(k=0; s2[k] != '\0'; k++){
            if(s1[i] == s2[k]){
                match = 1;
                break;
            }
        }
        if(!match){
            s1[j++] = s1[i];
        }
    }
    s1[j] = '\0';
}
int main(){
    char s1[] = "hello Hekez";
    char s2[] = "lo Thengez";

    squeeze(s1, s2);
    printf("Result: %s\n", s1);
    return 0;
}