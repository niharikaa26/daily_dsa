#include<iostream>
using namespace std;
class Player{
    public:
    int score;
    int health;

    void showHealth(){
        cout<<"health is:"<<health;
    }
};

int main(){
    Player Amit;
    Amit.score = 50;
    Amit.health = 100;
    cout<<Amit.score<<endl;
    Amit.showHealth();

    // Player vidushi;
    // vidushi.score = 100;
    // vidushi.health = 20;
    // cout<<vidushi.score;
}