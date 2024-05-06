#include <iostream>
using namespace std;
int main() {
    long int basicpay, allowance;
    int dept;
    cout << "department code are as follows:" << endl;
    cout << "Applied science = 1" << endl;
    cout << "CSE = 2" << endl;
    cout << "ECE = 3" << endl; 
    cout << "EE = 4" << endl;
    cout << "ME = 5" << endl;
    cout << "Enter the department code: ";
    cin >> dept;
    cout <<"enter the basic pay :";
    cin >> basicpay;
    switch (dept)
    {   
        case 1:
            allowance = 5000;
        case 2:
            allowance = 1000;
        case 3:
            allowance = 8000;
        case 4:
            allowance = 7000;
        case 5:    
            allowance = 6000;
    } 
    float salary= basicpay + basicpay*0.5 + basicpay*0.1+ allowance;
    cout << "salary is : " << salary;
    return 0;
}  
