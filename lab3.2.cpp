
#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int age;
    double price;
    bool promo, blocked, marked;
    int stock;

    cout << "Возраст: ";
    cin >> age;

    cout << "Сумма корзины: ";
    cin >> price;

    cout << "Есть промокод (1 - да, 0 - нет): ";
    cin >> promo;

    cout << "Аккаунт заблокирован (1 - да, 0 - нет): ";
    cin >> blocked;

    cout << "Есть товары 18+ (1 - да, 0 - нет): ";
    cin >> marked;

    cout << "Остаток товара на складе: ";
    cin >> stock;

    if (blocked) {
        cout << "Отказ: аккаунт заблокирован";
    }
    else if (age < 18 && marked) {
        cout << "Отказ: возрастное ограничение";
    }
    else if (stock <= 0) {
        cout << "Отказ: товара нет на складе";
    }
    else {
        double discount = 0;

        if (price >= 10000) {
            discount = 0.15;
        }
        else if (price >= 5000 && promo) {
            discount = 0.10;
        }

        double total = price - price * discount;

        cout << "Заказ оформлен!" << endl;
        cout << "Скидка: " << discount * 100 << "%" << endl;
        cout << "Итого: " << total << " руб." << endl;
    }

    return 0;
}
