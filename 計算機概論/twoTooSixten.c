#include <stdio.h>
#include <stdlib.h>

int main() {
    char code[10]={0};
    scanf("%s", code);
    int num = strtol(code, NULL, 2);
    printf("%X\n", num);
    printf("\n");
    return 0;
}
