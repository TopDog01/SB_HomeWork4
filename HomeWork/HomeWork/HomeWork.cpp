#include <iostream>

int main() {

    setlocale(LC_ALL, "Russian");

    double num1, num2;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "-----Проверяем-----" << std::endl;

    // Находим и выводим наименьшее число
    if (num1 < num2) {
        std::cout << "Наименьшее число: " << num1 << std::endl;
    }
    else {
        std::cout << "Наименьшее число: " << num2 << std::endl;
    }

    return 0;
}