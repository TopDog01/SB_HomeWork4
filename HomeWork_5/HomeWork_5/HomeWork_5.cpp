#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    int num1, num2;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    // Проверяем, что второе число не равно нулю
    if (num2 == 0) {
        std::cout << "Ошибка: деление на ноль невозможно!" << std::endl;
        return 1; // Завершаем программу с кодом ошибки
    }

    std::cout << "-----Проверяем-----" << std::endl;

    // Проверяем, делится ли num1 на num2 без остатка
    if (num1 % num2 == 0) {
        std::cout << "Да, " << num1 << " делится на " << num2 << " без остатка!" << std::endl;
    }
    else {
        std::cout << "Нет, " << num1 << " не делится на " << num2 << " без остатка." << std::endl;
    }

    return 0;
}