#include <iostream>

int main() {
    system("chcp 1251");
    float arr[7];
    std::cout << "Введите 7 чисел: " << std::endl;
    for (int i = 0; i < 7; i++) {
        std::cout << "Число " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << "Отрицательные числа: ";
    for (int i = 0; i < 7; i++) {
        if (arr[i] < 0) {
            std::cout << arr[i] << " ";
        }
    }

    std::cout << "Нецелые числа: ";
    for (int i = 0; i < 7; i++) {
        if (arr[i] != (int)arr[i]) {
            std::cout << arr[i] << " ";
        }
    }

    std::cout << "Целые положительные числа: ";
    for (int i = 0; i < 7; i++) {
        if (arr[i] > 0 && arr[i] == (int)arr[i]) {
            std::cout << (int)arr[i] << " ";
        }
    }
    return 0;
}