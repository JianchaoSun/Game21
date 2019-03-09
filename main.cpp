#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class die{
private:
public:
    die(){
        srand(time(0));
    }

    int getNum() const {
        return (rand()%6)+1;
    }


};
class player{
private:
    int point=0;
public:
    int getPoint() const {
        return point;
    }

public:
    int roll(int x){
        point+=x;
        return x;
    }
};


int main() {
    player player1;
    player computer;
    die d1;
    die d2;
    int choice =2;
    bool TRUE = true;
    while(TRUE) {
        cout << "do you want to roll 1.yes 2.no";
        cin >> choice;
        computer.roll(d2.getNum());
        if (choice == 1) {
            cout << player1.roll(d1.getNum());
            cout << "Current point is" << player1.getPoint();
        } else {
            cout <<"player: "<<player1.getPoint()<<endl;
            cout <<"computer: "<< computer.getPoint()<<endl;
            if (player1.getPoint() > 21&&computer.getPoint()<=21) {
                cout << "player lost";
            } else if (player1.getPoint() > computer.getPoint()) {
                cout << "Player win";
            } else if (player1.getPoint() < computer.getPoint() && computer.getPoint() > 21) {
                cout << "player win";
            } else if (player1.getPoint() < computer.getPoint() && computer.getPoint() <= 21) {
                cout << "player lost";
            } else if (player1.getPoint() == computer.getPoint()) {
                cout << "draw";
            }else if(player1.getPoint()>21&&computer.getPoint()>21){
                cout<<"draw";
            }

            TRUE = false;
        }

    }

        }
