// 1-ый уровень (на 10 баллов)
// Задание 1:
// По заданной длине окружности найти площадь круга по формуле S = pi * R2, 
// радиус вычислить из формулы длины окружности: L= 2 * pi * R
// Примечание pi = 3.14

#include <iostream>

using namespace std;

const float PI = 3.147;

float cirleSquare(float radius) {
    return PI * radius;
}

float cirlceLength(float radius) {
    return 2 * PI * radius;
}

int main() {
    float R, L;
    cout << "What is circle radius?" << endl;
    cin >> R;

    cout << "Circle square are -" << cirleSquare(R) << endl;
    
    cout << "Circle length is - " << cirlceLength(R) << endl;

    return 0;
}