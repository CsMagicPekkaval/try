#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fin = fopen("lotto.txt", "r");
    FILE *fout = fopen("win.txt", "w");

    char line[1024]; 
 
    while (fgets(line, sizeof(line), fin) != NULL) {
        if (strstr(line, "02") != NULL) {
            fputs(line,fout);
        }
        else if (strstr(line, "04") != NULL) {
            fputs(line,fout);
        }
        else if (strstr(line, "06") != NULL) {
            fputs(line,fout);
        }
    }

    fclose(fin);
    fclose(fout);
    return 0;
}   