#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    int experiencePoints;

    std::cout << "Введите число очков опыта: ";
    std::cin >> experiencePoints;

    // Проверка на корректность ввода
    if (std::cin.fail() || experiencePoints < 0) {
        std::cout << "Ошибка: введите неотрицательное целое число." << std::endl;
        return 1; // Завершаем программу с кодом ошибки
    }

    std::cout << "-----Считаем-----" << std::endl;

    int level = 1; // Начальный уровень

    // Определяем уровень на основе очков опыта
    if (experiencePoints >= 5000) {
        level = 5;
    }
    else if (experiencePoints >= 2500) {
        level = 4;
    }
    else if (experiencePoints >= 1000) {
        level = 3;
    }

    std::cout << "Ваш уровень: " << level << std::endl;

    return 0;
}