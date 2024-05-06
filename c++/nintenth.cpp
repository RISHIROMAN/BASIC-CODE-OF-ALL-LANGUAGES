#include <iostream>
using namespace std;

class Voting {
    int number;
    int total_1;
    int total_2;
    int total_3;
    int total_4;
    int total_5;
    int spoilt_votes;
public:
    void choice(){
        cout << "Enter your choice: ";
        cout << "for 1. Candidate vote as 1" << endl;
        cout << "for 2. Candidate vote as 2" << endl;
        cout << "for 3. Candidate vote as 3" << endl;
        cout << "for 4. Candidate vote as 4" << endl;
        cout << "for 5. Candidate vote as 5" << endl;
        cin >> number;
    }
    void calculate_vote(){
        if (number == 1) {
            total_1++;
        } else if (number == 2) {
            total_2++;
        } else if (number == 3) {
            total_3++;
        } else if (number == 4) {
            total_4++;
        } else if (number == 5) {
            total_5++;
        } else {
            spoilt_votes++;
        }
    }
    void display (){
        cout << "Total votes for candidate 1: " << total_1 << endl;
        cout << "Total votes for candidate 2: " << total_2 << endl;
        cout << "Total votes for candidate 3: " << total_3 << endl;
        cout << "Total votes for candidate 4: " << total_4 << endl;
        cout << "Total votes for candidate 5: " << total_5 << endl;
        cout << "Total spoilt votes: " << spoilt_votes << endl;
    }
};
#include <iostream>
using namespace std;

int main() {
    Voting voting;
    int n;
    cout << "enter the no. of votes to be casted: ";
    cin >> n;

    for (int i = 0; i <(n+1); i++) {
        voting.choice();
        voting.calculate_vote();
    }
    voting.display();
    return 0;
}
