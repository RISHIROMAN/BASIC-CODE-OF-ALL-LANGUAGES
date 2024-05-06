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
public:
    void showResult() {
        cout << "Academics: " << subject1 << ", " << subject2 << ", " << subject3 << ", " << subject4 << ", " << subject5 << endl;    
    }
};

class Sports : public Student{
protected:
    int sports;
public:
    void showResult() {
        cout << "Sports: " << sports << endl;
    }
};

class Result : public Academics, public Sports{
public:
    void compileResult() {
        float result = 0.8 * (subject1 + subject2 + subject3 + subject4 + subject5) + 0.2 * sports;
        cout << "Result: " << result << endl;
    }
};

int main() {
    Student student;
    student.rollNo = 1;
    student.name = "rishi";

    academics.subject1 = 90;
    academics.subject2 = 85;
    academics.subject3 = 95;
    academics.subject4 = 80;
    academics.subject5 = 92;

    sports.sports = 100;

    Result result;
    result.compileResult();
    return 0;
}
