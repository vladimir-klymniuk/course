// Задание 5: Заданы три сопротивлении R1, R2, R3 . 
// Вычислить значение сопротивления R0 по формуле: 1/R0 = (1/R1) + (1/R2) + (1/R3).

// Контрольный пример: R1=2, R2=4, R3=8 R0 = 1.142857
#include <iostream>
#include <string>

using namespace std;

int main() {
    double R1 = 2, R2 = 4, R3 = 8;
    double R0;
    R0 = (1/R1) + (1/R2) + (1/R3);

    // Проводимость в Сименсах, а не сопроситвеление в Омах.
    // R в омах = 1/Сименсы
    // 0,5      1/2
    // 0.25     1/4
    // 0,125    1/8

    cout << 1 / ((1/R1) + (1/R2) + (1/R3)) << "\n"; //TODO: discover why not the same result <- 1.142857 what should be done to display sensative data.

    return 0;
}