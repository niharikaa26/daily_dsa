#include<iostream>
using namespace std;
class Player{
    private:
    int score;
    int health;

    public:
    void setScore(int s){
        score = s;
    }

    void setHealth(int h){
        health = h;
    }
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};

int main(){
    Player Amit;
    Amit.setScore(100);
    Amit.setHealth(200);
    cout<<"Score is:"<<Amit.getScore()<<endl;
    cout<<"Health is:"<<Amit.getHealth()<<endl;

}