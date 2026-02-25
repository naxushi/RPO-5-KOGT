#include <iostream>

int main() {
    system("chcp 1251");
    const int ROWS = 5;
    const int COLS = 8;
    int arr[ROWS][COLS];

    srand(time(0));

    std::cout << "Массив 5x8:" << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 100; 
            std::cout << arr[i][j] << "\t"; 
        }
        std::cout << std::endl; 
    }

    int sum = 0;
    int min = arr[0][0];
    int max = arr[0][0];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum = sum + arr[i][j];

            if (arr[i][j] < min) {
                min = arr[i][j];
            }

            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    std::cout << "\n=====================" << std::endl;
    std::cout << "Сумма всех элементов: " << sum << std::endl;
    std::cout << "Минимальный элемент: " << min << std::endl;
    std::cout << "Максимальный элемент: " << max << std::endl;

    return 0;
}