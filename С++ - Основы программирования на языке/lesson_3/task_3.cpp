// Найти среднее арифметическое всех целых чисел от 1 до 1000.
#include <iostream>

using namespace std;

int main() {
    int total = 0;

    for(int i = 1; i <= 1000; i++) {
        total += i;
        cout << "Avg sum of " << i << "numbers is:";
        cout << (total / i) << endl;
    }

    return 0;
}