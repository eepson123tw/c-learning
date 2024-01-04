#include <stdio.h>

/*為什麼使用指針？

直接訪問記憶體地址：指針儲存變數的記憶體地址，這使得您能夠直接訪問和操作該地址中的數據。

效率：通過指針，函數可以直接修改記憶體中的數據，而不是創建數據的副本，這樣可以提高程序的效率。

動態記憶體分配：指針用於動態分配記憶體，這是C語言中處理可變大小數據的一種方式。
*/ 

int main() {
    int value = 5;
    int *pointer = &value;  //  創建了一個指向整數的指針 pointer，並將其初始化為value的地址。&運算符用於獲取value的地址。

    printf("Value的值: %d\n", value);         // 輸出變數value的值
    printf("Value的地址: %p\n", &value);      // 輸出變數value的地址
    printf("Pointer儲存的地址: %p\n", pointer);  // 輸出指針pointer儲存的地址
    printf("Pointer指向的值: %d\n", *pointer);  // 輸出指針pointer指向的記憶體地址中儲存的值

    return 0;
}
