#include <iostream>

using namespace std;
int main() {

    int n;
    cout<<"enter the number of prome number you weant";
    cin>> n;
    int prime;
    int count;
    int i;
    count=0;
    cout<<"this is prime number";
    while (count<=n)
    {
        for(i=2,i<n,i++){
            if (prime%i!=0){
                cout<<prime;
            }
            else{
                cout<<"not prime";
            }
            count++;
        }
    }
    return 0;
}