#include <iostream>
using namespace std;

class date {
private:
    int day;
    int month;
    int year;

public:
    date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Overloading relational operators
    bool operator<(const date& other) const {
        if (year < other.year)
            return true;
        else if (year == other.year && month < other.month)
            return true;
        else if (year == other.year && month == other.month && day < other.day)
            return true;
        else
            return false;
    }

    // Overloading increment operator
    date& operator++() {
        day++;
        // Handle month and year overflow
        if (day > daysInMonth(month, year)) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
        return *this;
    }

    // Overloading addition operator
    date operator+(int days) const {
        date result = *this;
        result.day += days;
        // Handle month and year overflow
        while (result.day > daysInMonth(result.month, result.year)) {
            result.day -= daysInMonth(result.month, result.year);
            result.month++;
            if (result.month > 12) {
                result.month = 1;
                result.year++;
            }
        }
        return result;
    }

    // Conversion from derived type to basic type
    operator int() const {
        int days = 0;
        // Calculate the number of days elapsed in the current year
        for (int m = 1; m < month; ++m)
            days += daysInMonth(m, year);
        days += day;
        return days;
    }

    // Getter functions to access private member variables
    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }

private:
    // Function to get the number of days in a month
    int daysInMonth(int m, int y) const {
        if (m == 2) {
            if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
                return 29; // Leap year
            else
                return 28; // Non-leap year
        } else if (m == 4 || m == 6 || m == 9 || m == 11) {
            return 30;
        } else {
            return 31;
        }
    }
};

int main() {
    date dt1(1, 1, 2022);
    date dt2(2, 1, 2022);

    if (dt1 < dt2) {
        cout << "dt1 is less than dt2" <<endl;
    }

    ++dt1;
    cout << "dt1 incremented by one day: " << dt1.getDay() << "/" << dt1.getMonth() << "/" << dt1.getYear() <<endl;

    date dt3 = dt2 + 5;
    cout << "dt2 + 5 days: " << dt3.getDay() << "/" << dt3.getMonth() << "/" << dt3.getYear() <<endl;

    int days = dt1;
    cout << "Number of days elapsed in the current year of dt1: " << days <<endl;

    return 0;
}
