// Написать программу, 
//      которая выводит на экран таблицу умножения на k, 
//      где k – номер варианта.

// Например, для 7-го варианта:
//      7 x 2 = 14
//      7 x 3 = 21
#include <iostream>

using namespace std;

int main() {
    int k;
    k = 0;
    cout << "Please, enter the multiplier value:" << endl;
    cin >> k;

    for (int i = 1; i < 10; i++) {
        cout << k << " x " << i << " = " << (k * i) << endl;
    }

    return 0;
}