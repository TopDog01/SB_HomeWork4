#include <iostream>
#include <string>

using namespace std;

void printMenu(int day) {
    switch (day) {
    case 1: // Понедельник
        cout << "Меню сегодня (понедельник):" << endl;
        cout << "1. Борщ" << endl;
        cout << "2. Салат «Винегрет»" << endl;
        cout << "3. Котлета по-киевски с картофельным пюре" << endl;
        cout << "4. Компот" << endl;
        break;
    case 2: // Вторник
        cout << "Меню сегодня (вторник):" << endl;
        cout << "1. Харчо" << endl;
        cout << "2. Салат «Оливье»" << endl;
        cout << "3. Баварские колбаски с капустой" << endl;
        cout << "4. Морс" << endl;
        break;
    case 3: // Среда
        cout << "Меню сегодня (среда):" << endl;
        cout << "1. Уха" << endl;
        cout << "2. Салат «Цезарь»" << endl;
        cout << "3. Рыба запеченная с овощами" << endl;
        cout << "4. Лимонад" << endl;
        break;
    case 4: // Четверг
        cout << "Меню сегодня (четверг):" << endl;
        cout << "1. Гороховый суп" << endl;
        cout << "2. Салат «Цезарь» с креветками" << endl;
        cout << "3. Куриная ножка с пюре" << endl;
        cout << "4. Морс" << endl;
        break;
    case 5: // Пятница
        cout << "Меню сегодня (пятница):" << endl;
        cout << "1. Томатный суп" << endl;
        cout << "2. Салат с тунцом" << endl;
        cout << "3. Стейк из говядины с картофелем" << endl;
        cout << "4. Вода с лимоном" << endl;
        break;
    case 6: // Суббота
        cout << "Меню сегодня (суббота):" << endl;
        cout << "1. Грибной суп" << endl;
        cout << "2. Салат «Греческий»" << endl;
        cout << "3. Паста с курицей" << endl;
        cout << "4. Фреш" << endl;
        break;
    case 7: // Воскресенье
        cout << "Меню сегодня (воскресенье):" << endl;
        cout << "1. Куриный бульон" << endl;
        cout << "2. Салат с авокадо" << endl;
        cout << "3. Запеченная рыба с рисом" << endl;
        cout << "4. Чай" << endl;
        break;
    default:
        cout << "Некорректный ввод. Пожалуйста, введите число от 1 до 7." << endl;
        break;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int day;
    cout << "Введите день недели (от 1 до 7): ";
    cin >> day;

    printMenu(day);

    return 0;
}