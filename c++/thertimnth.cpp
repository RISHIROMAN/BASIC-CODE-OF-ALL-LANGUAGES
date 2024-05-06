#include <iostream>
using namespace std;

class base {
    public:
        virtual void show(int i) =0 ;
};
class derived : public base {
    private:
        int m =20;
    public:
        void show(int i){
            cout<<i<<endl;
        }
};
int main(void)
{
    base* b = new derived();
    b->show(40);
    return 0;
}   