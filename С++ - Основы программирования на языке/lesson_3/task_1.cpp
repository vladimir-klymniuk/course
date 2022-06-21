// Напишите программу, 
// которая вычисляет сумму целых чисел от а до 500 (значение a вводится с клавиатуры). 
#include <iostream>

using namespace std;

const int LIMIT = 500;

int main() {
    unsigned counter, total;
    cout << "Please, enter the cursor position:" << endl;
    cin >> counter;

    while (counter <= LIMIT) {
        total += counter;
        counter++;
    }

    cout << "total: " << total << endl;

    return 0;
}