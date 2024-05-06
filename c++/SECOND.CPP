#include <iostream>
using namespace std;

enum Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main() {
    int month;
    cout << "Enter the month number (1-12): ";
    cin >> month;

    switch (static_cast<Month>(month)) {
        case January:
        case March:
        case May:
        case July:
        case August:
        case October:
        case December:
            cout << "Number of days: 31";
            break;
        case April:
        case June:
        case September:
        case November:
            cout << "Number of days: 30";
            break;
        case February:
            string year;
            cout << "Enter the year: ";
            cin >> year;
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                cout << "Number of days: 29 (Leap Year)";
            } else {
                cout << "Number of days: 28";
            }
            break;
        default:
            cout << "Invalid month number!";
            break;
    }

    return 0;
}
