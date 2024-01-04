#include <stdio.h>

int main() {
    int value = 5;
    int *pointer = &value;  //  創建了一個指向整數的指針 pointer，並將其初始化為value的地址。&運算符用於獲取value的地址。

    printf("Value的值: %d\n", value);         // 輸出變數value的值
    printf("Value的地址: %p\n", &value);      // 輸出變數value的地址
    printf("Pointer儲存的地址: %p\n", pointer);  // 輸出指針pointer儲存的地址
    printf("Pointer指向的值: %d\n", *pointer);  // 輸出指針pointer指向的記憶體地址中儲存的值

    return 0;
}
