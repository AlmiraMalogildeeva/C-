
#include <iostream>
#include <chrono>
using namespace std;

int main() {
    const int N = 10000;

    int* a = new int[N * N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            a[i * N + j] = 1;
        }
    }

    // Первый способ: по строкам
    long long sum1 = 0;

    auto start1 = chrono::steady_clock::now();

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sum1 = sum1 + a[i * N + j];
        }
    }

    auto end1 = chrono::steady_clock::now();

    // Второй способ: по столбцам
    long long sum2 = 0;

    auto start2 = chrono::steady_clock::now();

    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            sum2 = sum2 + a[i * N + j];
        }
    }

    auto end2 = chrono::steady_clock::now();

    double time1 = chrono::duration<double>(end1 - start1).count();
    double time2 = chrono::duration<double>(end2 - start2).count();

    cout << "Sum 1: " << sum1 << endl;
    cout << "Time 1: " << time1 << " seconds" << endl;

    cout << "Sum 2: " << sum2 << endl;
    cout << "Time 2: " << time2 << " seconds" << endl;

    delete[] a;

    return 0;
}
