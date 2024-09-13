#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
int main() {
    // 使用 std::endl
    std::cout << "開始使用 std::endl:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << i<<"|"<< std::setw(10)<<i+1<< std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // 模擬工作
    }

    // 使用 "\n"
    std::cout << "開始使用 '\\n':" << "\n";
    for (int i = 0; i < 5; i++) {
        std::cout << i << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // 模擬工作
    }

    return 0;
}