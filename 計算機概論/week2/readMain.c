#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fin = fopen("main.c", "r");
    FILE *fout = fopen("main.txt", "w");
    char buffer[4096];
    while (fgets(buffer, sizeof(buffer), fin) != NULL) {
        fputs(buffer, fout);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}
