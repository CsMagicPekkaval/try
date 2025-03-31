#include <stdio.h>
#include <stdlib.h>

int main() {
    // 分配一個能存放 10 個 int 的陣列，並初始化所有位元組為 0
    int *arr = malloc(10);
    if (arr == NULL) {
        perror("calloc failed");
        return 1;
    }
    // 印出陣列內容以驗證是否都被初始化為 0
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // 使用完畢後釋放記憶體
    free(arr);
    return 0;
}
