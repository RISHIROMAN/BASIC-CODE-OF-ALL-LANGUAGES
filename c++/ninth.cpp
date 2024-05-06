#include <iostream>
using namespace std;


class Complex {
private:
    double real;
    double imaginary;

public:
    // Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}
    complex(int r, int i){
        real= r;
        imaginary = i;
    }

    friend Complex sum(const Complex& c1, const Complex& c2);

    void display() {
        cout << real << " + " << imaginary << "i" <<endl;
    }
};

Complex sum(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

int main() {
    Complex c1(2.5, 3.7);
    Complex c2(1.8, 4.2);

    Complex c3 = sum(c1, c2);

    cout << "Sum of two complex numbers: ";
    c3.display();

    return 0;
}
