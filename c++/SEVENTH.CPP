#include <iostream>
using namespace std;

// class construct {
// public:
//     int c;
//     construct() {   // Default Constructor
//         c = 10;
//     }
//     construct(int a, int b) {   // Parameterized Constructor   
//         cout << "Addition: " << a + b + c << endl;
//     }
//     void add(int a, int b) {
//         cout << "Addition: " << a + b + c << endl;
//     }
// };

// int main() {
//     construct obj(10, 20);
//     obj.add(10, 20);
//     return 0;
// }

// class construct {
// public:
//     int a;
//     void init(int x) {
//         a = x;
//     }
//     construct(){}
//     construct(construct &t){
//         a=t.a;
//     }
//     void dispaly() {
//         cout << "Value of a: " << a << endl;
//     }
// };
// int main(){
//     construct obj1;
//     construct obj2(obj1);
//     obj1.init(10);
//     obj2.display(obj1);
//     obj2.display();
//     return 1;
    
//     }

class test {
public:
    // Constructor
    test() {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~test() {
        cout << "Destructor called" << endl;
    }
};