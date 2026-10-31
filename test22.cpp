
#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    double a;
    double b;


    cout << "Введите первое значение в см: ";
    cin >> a;

    cout << "Введите второе значение в см: ";
    cin >> b;

    if (a > b) {
        cout << "Первое значение больше второго" << endl;
    }
    else if (a < b) {
        cout << "Первое значение меньше второго" << endl;
    }
    else {
        cout << "Значения равны" << endl;
    }

    return 0;
}
