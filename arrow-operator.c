#include <stdio.h>

// 定義Point結構體
struct Point {
    int x, y;
};

int main() {
    struct Point pt = {10, 20};  // 創建一個Point結構體實例
    struct Point *ptr = &pt;     // 創建一個指向Point的指針

    // 使用->運算符通過指針訪問結構體成員
    printf("Point的x座標是：%d\n", ptr->x);
    printf("Point的y座標是：%d\n", ptr->y);

    return 0;
}
