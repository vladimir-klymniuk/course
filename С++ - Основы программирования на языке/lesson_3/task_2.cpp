// Напишите программу, 
//   которая запрашивает два целых числа x и y, 
//   после чего вычисляет и выводит значение x в степени y.
#include <iostream>

using namespace std;

int main() {
    unsigned x, y, r;

    cout << "Calculate the X in Y rate." << endl;
    cout << "x:"; cin >> x; cout << endl;
    cout << "y:"; cin >> y; cout << endl;
    r = x;

    for (int i = 1; i < y; i++) {
        x *= r;
    }

    // no instruction for memory overloading;
    cout << "result is:" << x << endl;

    return 0;
}