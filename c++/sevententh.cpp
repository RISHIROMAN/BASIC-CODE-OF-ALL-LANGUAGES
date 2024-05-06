#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;
};

class Academics : public Student{
protected:
    int subject1;
    int subject2;
    int subject3;
    int subject4;
    int subject5;
    void showResult() {
        cout << "Academics: " << academics.subject1 << ", " << academics.subject2 << ", " << academics.subject3 << ", " << academics.subject4 << ", " << academics.subject5 << endl;    
    }
};
class Sports : public Student{
    protected:
        int sports;
    void showResult() {
        cout << "Sports: " << sports.sports << endl;
    }
};

class Result : public Academics, public Sports{
public:
    void compileResult() {
        float result = 0.8 * (academics.subject1 + academics.subject2 + academics.subject3 + academics.subject4 + academics.subject5) + 0.2 * Sports.sports;
        cout << "Result: " << result << endl;
    }
};

int main() {
    Student student;
    student.rollNo = 1;
    student.name = "John Doe";

    Academics academics;
    academics.subject1 = 90;
    academics.subject2 = 85;
    academics.subject3 = 95;
    academics.subject4 = 80;
    academics.subject5 = 92;

    Sports sports;
    sports.sports = 100;

    Result result;
    result.compileResult();

    return 0;
}