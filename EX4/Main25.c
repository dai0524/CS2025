#include <stdio.h>

void multi(int i, int j) {
    if (i > 9) return; // 終止條件，當 i > 9 時結束

    if (j > 9) {
        printf("\n");       // 換行
        multi(i + 1, 1);     // 換到下一列 i，從 j=1 開始
    } else {
        printf("%d*%d=%-2d ", i, j, i * j); // 使用 %-2d 對齊輸出
        multi(i, j + 1);     // 繼續下一個 j
    }
}

int main() {
    multi(1, 1); // 從 1*1 開始
    return 0;
}
