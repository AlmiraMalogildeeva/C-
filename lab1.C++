
#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string name;
    int day, month, year;

    cout << "Имя: ";
    cin >> name;
    cout << "День рождения: ";
    cin >> day;
    cout << "Месяц рождения: ";
    cin >> month;
    cout << "Год рождения: ";
    cin >> year;

    clock_t start = clock();

    time_t t = time(0);
    tm* now = localtime(&t);

    int age = now->tm_year + 1900 - year;

    if (now->tm_mon + 1 < month ||
        (now->tm_mon + 1 == month && now->tm_mday < day)) {
        age = age - 1;
    }

    cout << "Привет, " << name << "!" << endl;
    cout << "Возраст: " << age << endl;

    cout << "Время: "
         << double(clock() - start) / CLOCKS_PER_SEC
         << " сек." << endl;

    return 0;
}
