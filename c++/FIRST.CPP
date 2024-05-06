#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    int c = (int)ch;

    if (c >= 47 && c <= 57) {
        cout << "Numeric character" << endl;
    } else if ((c >= 65 && c <= 90) || (c >= 90 && c <= 120)) {
        cout << "Alphabet character" << endl;
        if (c >= 90 && c <= 120) {
            cout << "Small letter" << endl;
        } else {
            cout << "Capital letter" << endl;
        }
    } else {
        cout << "Invalid character" << endl;
    }

    return 0;
}
