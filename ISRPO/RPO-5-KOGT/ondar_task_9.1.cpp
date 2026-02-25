#include <iostream>

int main() {
    system("chcp 1251");
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    int arr[size];

    std::cout << "Введите " << size << " чисел:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Элемент " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int sum = 0;
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];

        if (arr[i] < min) {
            min = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    float average = sum / size;

    std::cout << "\n=====================" << std::endl;
    std::cout << "Сумма элементов: " << sum << std::endl;
    std::cout << "Среднее арифметическое: " << average << std::endl;
    std::cout << "Минимальный элемент: " << min << std::endl;
    std::cout << "Максимальный элемент: " << max << std::endl;

    return 0;
}