#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    double num1, num2;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "-----Проверяем-----" << std::endl;

    // Сравниваем числа и выводим результат
    if (num1 < num2) {
        std::cout << "Наименьшее число: " << num1 << std::endl;
    }
    else if (num1 > num2) {
        std::cout << "Наименьшее число: " << num2 << std::endl;
    }
    else {
        std::cout << "Числа равны!" << std::endl;
    }

    return 0;
}