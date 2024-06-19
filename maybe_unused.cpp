#include <iostream>

int main()
{
    [[maybe_unused]] double pi = 3.141596;
    [[maybe_unused]] double gravity = 9.8; // 修正了重力加速度值
    [[maybe_unused]] double phi = 1.61803;

    std::cout << pi << '\n';
    std::cout << gravity << '\n';

    return 0;
}
