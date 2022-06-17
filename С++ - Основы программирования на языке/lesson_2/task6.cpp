// Пользователь вводит с клавиатуры сумму в гривнах и курс доллара, евро и рубля.
// Посчитать, сколько пользователь сможет купить долларов, евро или рублей. 
// Количество долларов, евро и рублей должно быть целым (мелочь не выдают).

#include <cmath>
#include <iostream>
#include "currencyconverter.h"

using namespace std;

int main() {
    float amountUAH;
    float rateUSD, rateEUR, rateRUB;
    int tmp;

    cout << "Please enter the UAH amount:" << endl;
    cin >> amountUAH;
    
    cout << "Please enter the exchange rate UAH to USD:" << endl;
    cin >> rateUSD;

    cout << "USD - round " << convertCurrency(amountUAH, rateUSD) << endl;
    cout << "EUR - round " << convertCurrency(amountUAH, rateEUR) << endl;
    cout << "RUB - round " << convertCurrency(amountUAH, rateRUB) << endl;


    return 0;
}