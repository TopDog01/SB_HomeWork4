#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int num1, num2, sum;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    sum = num1 + num2; // вычисляем сумму двух чисел

    // Проверяем ответ пользователя
    cout << "Введите их сумму: ";
    int user_input;
    cin >> user_input;

    if (user_input == sum) {
        cout << "Верно!\n";
    }
    else {
        cout << "Неверно. Правильный результат: " << sum << endl;
    }

    return 0;
}