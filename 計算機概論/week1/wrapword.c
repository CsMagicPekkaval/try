#include <stdio.h>
#include <string.h>


int main() {
    char code[64]={0};
    int many[64] = {0};
    char str[64] = {0};   
    int num = 0;
    int count = 1;
    scanf("%s", code);
/*
    for (int i = 0; i < strlen(code); i++) {
       printf("%c", code[i]);
    }
    printf("\n");
*/
    str[num] = code[0];
    many[num] = 1;
    //printf("%s\n", code);
    for (int i = 1; i < strlen(code); i++) {
        if (code[i] == str[num]) {
            many[num]++;
        } 
        else {
            num++;
            str[num] = code[i];
            many[num] = 1;
        }
    }
    //printf("%s\n", str);
    for (int i = 0; i < strlen(str); i++) {
        printf("%c%d", str[i], many[i]);
    }
    printf("\n");
}
