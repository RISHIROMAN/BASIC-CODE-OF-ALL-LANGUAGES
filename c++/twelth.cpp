// #include <iostream>
// #include <string>
// using namespace std;

// class B
// {
//     int b;
//     public:
//         B(){}
//         B(int i){
//             b = i;
//         }
//         int show(){
//             return b;
//         }
// };
// class C
//     {
//     B b;
//     public:
//         C(int i){
//             b = B(i);
//         }
//         friend void show();
// };

// void show()
// {
//     C c(10);
//     cout<<"value of b is: "<<c.b.show()<<endl;
// }
// int main(int argc, char const *argv[])
// {
//     show();
//     return 0;
// }


#include<iostream>
using namespace std;
class Test{
static int a;
public:
Test () { a++; }
static int get (){ return a; }
};
int Test::a = 0;
int main()
{
cout << Test:: get () << " ";
Test t [4];
cout << Test::get ();
return 0;
}