// Найти произведение всех целых чисел от a до 20 
//       (значение a вводится с клавиатуры: 1 <=a <= 20).
#include <iostream>

using namespace std;

const int STOP = 20;

int main() {
    unsigned int a, totalMult;
    cout << "Please, enter the start sum:";
    cin >> a;

    for (int i = STOP; i >= a; i--) {
        //  Найти произведение всех целых чисел от a до 20  
        //  не понимаю произведение чего на что
        totalMult += (i * (i -1));
    }

    cout << "Total sum by formula (i * i - 1) is - " << totalMult << endl;

    return 0;
}