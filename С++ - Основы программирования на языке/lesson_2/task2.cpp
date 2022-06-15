// Задание 2:
// Вычислить пройденное расстояние 
// при прямолинейном равноускоренном движении по формулe:
    // S = v * t + (a * t^2) / 2;
    // v – скорость;
    // t – время;
    // а – ускорение.

#include <iostream>

using namespace std;

float calculateDistance(float speed, float time, float nitro) {
    return (speed * time) + (nitro * (time * time)) / 2;
}

int main() {
    float speed, time, nitro;

    cout << "This code gonna calculate the passed distance." << endl;
    cout << "Please, fille the required parameters.";
    cout << "Speed:" << endl;
    cin >> speed;

    cout << "Time:" << endl;
    cin >> time;

    cout << "Nitro:" << endl;
    cin >> nitro;

    cout << "Result is - " << calculateDistance(speed, time, nitro) << endl;

    return 0;
}