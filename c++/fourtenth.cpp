#include <iostream>
using namespace std;

class RBI 
{
    public:
        virtual void Insurance() = 0;
        void funding() 
        {
            cout << "RBI funding" << endl;
        }
};
class SBI : public RBI 
{
    public:
        void Insurance() 
        {
            cout << "SBI Insurance" << endl;
        }
        void car_loan() 
        {
            cout << "SBI car loan" << endl;
        }
};
class HDFC : public RBI 
{
    public:
        void Insurance() 
        {
            cout << "HDFC Insurance" << endl;
        }
        void personal_loan() 
        {
            cout << "HDFC personal loan" << endl;
        }
};
class PNB : public RBI 
{
    public:
        void Insurance() 
        {
            cout << "PNB Insurance" << endl;
        }
        void home_loan() 
        {
            cout << "HDFC home loan" << endl;
        }
};
int main() 
{
    // RBI *rbi;
    SBI sbi;
    HDFC hdfc;
    PNB pnb;
    RBI *rbi=new sbi();
    sbi.car_loan();
    hdfc.personal_loan();
    pnb.home_loan();
    // rbi = new sbi();
    rbi->Insurance();
    rbi->funding();
    // rbi = new hdfc();
    // rbi->Insurance();
    // rbi->funding();
    // rbi = new pnb();
    // rbi->Insurance();
    // rbi->funding();
    return 0;
}