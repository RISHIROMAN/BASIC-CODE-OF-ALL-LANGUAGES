#include <iostream>
using namespace std;

class A
{
public:
    A(int x) {
        cout<<"parrametrized constructor of class A CALLED"<< endl;
    }
}
class B:virtual public A:
    B(int x):A(x){
        cout<<"parrametrized constructor of b called"
    }
class C:virtual public A:
    B(int x):A(x){
        cout<<"parrametrized constructor of b called"
    }