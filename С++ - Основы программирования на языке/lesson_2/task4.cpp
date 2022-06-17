// Пользователь вводит с клавиатуры время начала и время
// завершения телефонного разговора (часы, минуты и секунды).
// Посчитать стоимость разговора, если стоимость минуты – 30 копеек.

#include <iostream>
#include "timeconvert.h"

// #define PER_MINГГЕ_CENTS = 30;

using namespace std;

const float TARIFICATION_PER_MINГГЕ_CENTS = 0.30;


// int converTimeToSeconds(int hour, int minute, int second) {
//     return (
//         (hour * 60 * 60 * 60) + (minute * 60) + second
//     );
// }

int getStartTime() {
    int startHour, startMinute, startSecond;

    cout << "Phone call - start time is:" << endl;
    cout << "Hour=" << endl;
    cin >> startHour;

    if (startHour > 24) {
        cout << "Hours Must be less then 24" << endl;
    }

    cout << "Minute=" << endl;
    cin >> startMinute;
    
    if (startMinute > 60) {
        cout << "Minutes must be less then 60" << endl;
    }

    cout << "Second=" << endl;
    cin >> startSecond;

    if (startSecond > 60) {
        cout << "Second must be less then 60" << endl;
    }

    return converTimeToSeconds(startHour, startMinute, startSecond);
}

int getEndTime() {
    int endHour, endMinute, endSecond;

    cout << "Phone call - end time is:" << endl;
    cout << "Hour=" << endl;
    cin >> endHour;

    if (endHour > 24) {
        cout << "Hours Must be less then 24" << endl;
    }

    cout << "Minute=" << endl;
    cin >> endMinute;

    if (endMinute > 60) {
        cout << "Minutes must be less then 60" << endl;
    }

    cout << "Second=" << endl;
    cin >> endSecond;

    if (endSecond > 60) {
        cout << "Second must be less then 60" << endl;
    }

    return converTimeToSeconds(endHour, endMinute, endSecond);
}

int main() {
    int startTimeSeconds, endTimeSeconds;
    float total = 0.00;
    startTimeSeconds = getStartTime();
    endTimeSeconds = getEndTime();

    if (startTimeSeconds > endTimeSeconds) {
        std::cout << "Call end time must be more then start time" << endl;
        // cout << "Call end time must be more then start time" << endl;
    }

    total = ((endTimeSeconds - startTimeSeconds) / 60) * TARIFICATION_PER_MINГГЕ_CENTS;
    cout << "Call amount are - " << total << endl;

    return 0;
}