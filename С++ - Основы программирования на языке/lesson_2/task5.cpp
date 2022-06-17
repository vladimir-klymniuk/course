// Пользователь вводит с клавиатуры 
//      расстояние,
//      расход бензина на 100 км и 
//      стоимость трех видов бензина.
// Вывести на экран сравнительную таблицу 
// со стоимостью поездки на разных видах бензина.

#include <iostream>
#include "calculatetripcost.h"

using namespace std;

int main() {
    float distance, 
          gasolineConsumsion,
          costFirstFuel,
          costSecondFuel,
          costThirdFuel;

    cout << "To generate costs calculation table, ";
    cout << "please, fill the required values." << endl;

    cout << "What are the trip distance? (km)" << endl;
    cin >> distance;

    cout << "What are the car consumsion?" << endl;
    cin >> gasolineConsumsion;

    cout << "Fuel One cost (cents):" << endl;
    cin >> costFirstFuel;

    cout << "Fuel Two cost (cents):" << endl;
    cin >> costSecondFuel;

    cout << "Fuel Three cost (cents):" << endl;
    cin >> costThirdFuel;

    cout << "Fuelt one: "   << calculateTripCost(distance, gasolineConsumsion, costFirstFuel) << " cents | ";
    cout << "Fuelt two: "   << calculateTripCost(distance, gasolineConsumsion, costSecondFuel) << " cents | ";
    cout << "Fuelt three:"  << calculateTripCost(distance, gasolineConsumsion, costThirdFuel) << " cents" << endl;

    return 0;
}