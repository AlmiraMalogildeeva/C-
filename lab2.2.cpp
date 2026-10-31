
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    string name;
    int birth_year;
    int birth_month;
    int birth_day;

    int current_year;
    int current_month;
    int current_day;


    cout << "Введите ваше имя: ";
    cin >> name;

    cout << "Введите год рождения: ";
    cin >> birth_year;

    cout << "Введите месяц рождения: ";
    cin >> birth_month;

    cout << "Введите день рождения: ";
    cin >> birth_day;

    
    cout << "Введите текущий год: ";
    cin >> current_year;

    cout << "Введите текущий месяц: ";
    cin >> current_month;

    cout << "Введите текущий день: ";
    cin >> current_day;


    int age = current_year - birth_year;

    
    if (current_month < birth_month) {
        age = age - 1;
    }
    else if (current_month == birth_month && current_day < birth_day) {
        age = age - 1;
    }

    
    cout << endl;
    cout << "Привет, " << name << "!" << endl;
    cout << "Ваш возраст: " << age << " лет" << endl;

    return 0;
}
