#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float number = 123.456789;

    // Display the number in scientific notation
    cout << scientific;
    cout << "Scientific notation: " << number << endl;

    // Reset formatting flags
    cout.unsetf(ios::floatfield);

    // Display the number in fixed decimal notation
    cout << fixed;
    cout << "Fixed decimal notation: " << number << endl;

    return 0;
}
