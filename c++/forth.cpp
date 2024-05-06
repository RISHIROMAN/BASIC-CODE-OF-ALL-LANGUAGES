#include <iostream>
using namespace std;
int main() {
    int choice;
    float a,b;
    char ch;
    do
    {
        cout<<"enter the values of both the operator"<<endl;
        cin>>a;
        cin>>b;
        cout<<"enter the choice as + for adding, - for substraction, / for dividing, * for multiplication"<<endl;
        cin>>ch;
        if (ch=='+'){
            cout<<"your solution is : "<<a+b<<endl;
        }
        else if(ch=='-'){
            cout<<"your solution is : "<<a-b<<endl;
        }
        else if(ch=='*'){
            cout<<"your solution is  :"<<a*b<<endl;
        }
        else {
            if(b=0){
                cout<<"invalid opeartion"<<endl;
            }
            else{
            cout<<"your solution is  : "<<a/b<<endl;
            }
        }
        cout<<"wanna continue"<<endl;
        cout<<"give choice =1 if want to continue doing operation or =0 if do not want to continue"<<endl;
        cin>>choice;

    } while (choice=1); 
    return 0;
}
