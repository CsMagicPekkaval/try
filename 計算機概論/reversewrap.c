#include <stdio.h>
#include <string.h>

int main() {
    char code[64]={0};
    scanf("%s", code);
    for (int i = 0; i < strlen(code); i+=2) {
        int count = code[i+1] - '0';
        for ( int j = 0; j < count; j++){
            printf("%c", code[i]);
        }
    }
    printf("\n");
    
    return 0;
}
