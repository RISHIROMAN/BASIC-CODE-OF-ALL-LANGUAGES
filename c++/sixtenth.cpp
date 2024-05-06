#include <iostream>
using namespace std;

class alpha
{ 
    int a;
    public:
        alpha(int x)
        {
            a=x;
        }
        void show_a()
        {
            cout << "a=" << a << endl;
        }
};
class beta
{
    int b;
    public:
        beta(int y)
        {
            b=y;
        }
        void show_b()
        {
            cout << "b=" << b << endl;
        }
};
class gamma 
{
    int m;
    alpha aa;
    beta bb;

    public:
        gamma(int x, int y, int z) : aa(x), bb(y), m(z)
        {
           cout<<"displaying gamma class"<<endl;
        }
        void show_m()
        {
            cout << "m=" << m << endl;
            cout<<"displaying alpha class"<<endl;
            aa.show_a();
            cout<<"displaying beta class"<<endl;
            bb.show_b();
        }
};
int main()
{
    gamma g(5,10,15);
    g.show_m();
    return 0;
}