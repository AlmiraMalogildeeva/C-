
#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // ЗАДАНИЕ 1. Размеры основных типов данных

    cout << "1. Размеры основных типов данных:" << endl;

    cout << "bool: " << sizeof(bool) << " байт" << endl;
    cout << "char: " << sizeof(char) << " байт" << endl;
    cout << "short: " << sizeof(short) << " байт" << endl;
    cout << "int: " << sizeof(int) << " байт" << endl;
    cout << "long: " << sizeof(long) << " байт" << endl;
    cout << "long long: " << sizeof(long long) << " байт" << endl;

    cout << "unsigned char: " << sizeof(unsigned char) << " байт" << endl;
    cout << "unsigned short: " << sizeof(unsigned short) << " байт" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " байт" << endl;
    cout << "unsigned long: " << sizeof(unsigned long) << " байт" << endl;
    cout << "unsigned long long: " << sizeof(unsigned long long) << " байт" << endl;

    cout << "float: " << sizeof(float) << " байт" << endl;
    cout << "double: " << sizeof(double) << " байт" << endl;
    cout << "long double: " << sizeof(long double) << " байт" << endl;


    // ЗАДАНИЕ 2. Переполнение целочисленного типа

    cout << "\n2. Переполнение целочисленного типа:" << endl;

    unsigned char number = 255;

    cout << "Начальное значение: " << (int)number << endl;

    number = number + 1;

    cout << "После прибавления 1: " << (int)number << endl;


    // ЗАДАНИЕ 3. Потеря точности float и double

    cout << "\n3. Потеря точности float и double:" << endl;

    float a = 0.123456789012345f;
    double b = 0.123456789012345;

    cout.precision(15);

    cout << "float: " << a << endl;
    cout << "double: " << b << endl;


    // ЗАДАНИЕ 4. Использование auto

    cout << "\n4. Использование auto:" << endl;

    auto x = 100;
    auto y = 0.15625;
    auto z = true;

    cout << "x = " << x << ", размер: " << sizeof(x) << " байт" << endl;
    cout << "y = " << y << ", размер: " << sizeof(y) << " байт" << endl;
    cout << "z = " << z << ", размер: " << sizeof(z) << " байт" << endl;

    return 0;
}


