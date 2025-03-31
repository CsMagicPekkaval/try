#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *fin = fopen("main.c", "r");

    FILE *fout = fopen("main.txt", "w");
    
    char line[1024]; 
    int lineCount = 0;  
    int targetLine = 0;  
    
 
    while (fgets(line, sizeof(line), fin) != NULL) {
        lineCount++;
        if (strstr(line, "int main()") != NULL) {
            targetLine = lineCount;
            break;  
        }
    }
    
    fprintf(fout, "%d\n", targetLine);
    
    fclose(fin);
    fclose(fout);
    
    return 0;
}
