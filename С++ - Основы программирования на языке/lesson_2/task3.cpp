// Зарплата менеджера – 100$ + 5% от продаж. 
// Пользователь вводит с клавиатуры общую сумму сделок менеджера за месяц.
// Посчитать итоговую зарплату менеджера.

#include <iostream>

using namespace std;

const float MANAGER_PERCENT = 0.05;
const int MANAGER_SALLERY = 100;

void testResult(float expected, float actual, string say) {
    if (expected == actual) {
        cout << "Test passed. Expected result " << expected << "are equal to actual "  << actual << endl;
    } else {
        cout << "Test failed. Expected result " << expected << "are not equal to actual "  << actual << endl;
        cout << say << endl;
    }
}

float calculateRevShare(float amount) {
    return amount * MANAGER_PERCENT;
}

int main() {
    float amount;

    cout << "Please, enter company sales amount" << endl;
    cin >> amount;
    cout << "Managers monthly sallery is: " << (MANAGER_SALLERY + calculateRevShare(amount)) << endl;

    cout << "Executing the test" << endl;
    testResult(105, calculateRevShare(2100) ,"Ahoi!");

     return 0;
}