
#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    string name = "Альмира";
    int day = 7;
    int month = 9;
    int year = 2004;

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

    double seconds = double(clock() - start) / CLOCKS_PER_SEC;
    cout << "Время: " << seconds << " сек." << endl;

    return 0;
}

