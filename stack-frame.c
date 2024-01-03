#include <stdio.h>

void printStackFrame(int n) {
    int localVariable = 5;

    printf("遞迴層級：%d, 函數參數地址：%p, 局部變量地址：%p\n", n, &n, &localVariable);

    // 遞迴條件，避免無限遞迴
    if (n > 0) {
        printStackFrame(n - 1);
    }
}

int main() {
    printStackFrame(3);
    return 0;
}
