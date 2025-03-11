#include <stdio.h>
#include <string.h>
void print_sp(int i, int n) {
    for (int j = 0; j < i-n; j++) {
        printf(" ");
    }
}
void print_num(int i) {
    for (int j = 0; j < i; j++) {
        printf("%d",i);
        if (j < i - 1) { 
            printf(" ");
        }
    }
}
int main() {
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        print_sp(num,i+1);
        print_num(i+1);             
        printf("\n");
    }
    return 0;
}
