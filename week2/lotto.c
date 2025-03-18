#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    int i, j, num;
    int lotto[8]; 
    int count;
    int copy;
    srand(1);
    scanf("%d", &N);

    FILE *fp = fopen("lotto.txt", "w");
    if (fp == NULL) {
        return 1;
    }

    fprintf(fp, "========= lotto649 =========\n");

    for (i = 1; i <= 5; i++) {
        fprintf(fp, "[%d]: ", i);
        if (i <= N) {
            count = 0;
            while (count < 7) {
                num = rand() % 69 + 1;  
                copy = 0;
                for (j = 0; j < count; j++) {
                    if (lotto[j] == num) {
                        copy = 1;
                        break;
                    }
                }
                if (!copy) {
                    lotto[count++] = num;
                }
            }
            for (j = 0; j < 6; j++) {
                fprintf(fp, "%02d ", lotto[j]);
            }
            fprintf(fp, "%02d", lotto[j]);
        } 
        else {
            for (j = 0; j < 6; j++) {
                fprintf(fp, "__ ");
            }
            fprintf(fp,"__");
        }
        fprintf(fp, "\n");
    }
    fprintf(fp, "========= csie@CGU =========");
    fclose(fp);
    return 0;
}