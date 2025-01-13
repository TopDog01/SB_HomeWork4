#include <iostream>

int main() {

    setlocale(LC_ALL, "Russian");

    const int men_per_month = 9000; // количество мужчин
    const int visits_per_month = 1; // каждый мужчина посещает барбершоп раз в месяц
    const int hours_per_shift = 8;   // количество часов в смене
    const int clients_per_hour = 1;  // один барбер обслуживает одного клиента за 1 час

    
    int total_men;
    int total_barbers;

    std::cout << "Введите количество мужчин в городе: ";
    std::cin >> total_men;

    std::cout << "Введите количество барберов, работающих во всех барбершопах: ";
    std::cin >> total_barbers;

    // Рассчитываем общее количество клиентов в месяц
    int total_clients = total_men * visits_per_month;

    // Рассчитываем количество клиентов, которых может обслужить один барбер за месяц
    int clients_per_barber_per_month = hours_per_shift * 30 * clients_per_hour;

    // Рассчитываем общее количество клиентов, которых могут обслужить все барберы
    int total_clients_served = total_barbers * clients_per_barber_per_month;

    // Сравниваем количество клиентов и количество обслуживаемых клиентов
    if (total_clients_served >= total_clients) {
        std::cout << "Барберов достаточно для обслуживания всех мужчин." << std::endl;
    }
    else {
        int needed_barbers = (total_clients + clients_per_barber_per_month - 1) / clients_per_barber_per_month; 
        std::cout << "Недостаточно барберов. Необходимо " << needed_barbers << " барберов." << std::endl;
    }

    return 0;
}