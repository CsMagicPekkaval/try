#include <stdio.h>
#include <string.h>
int main() {
    char code[64]={0};
    scanf("%s", code);
    for (int i = strlen(code)-1; i > -1; i--) {
            printf("%c", code[i]);
    }
    printf("\n");
    return 0;
}
