#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    int x;

    std::cout << "Введите число: ";
    std::cin >> x;

    // Вычисляем остаток от деления x на 2
    int remainder = x % 2;

    // Проверяем, четное ли число
    if (remainder == 0) {
        std::cout << "Число " << x << " является четным." << std::endl;
    }
    else {
        std::cout << "Число " << x << " является нечетным." << std::endl;
    }

    return 0;
}