#include<iostream>
using namespace std;
class Player{
 private:
    int health;
    int age;
    int score;
    bool alive;

 public:
    void set_health(int health){
        this->health = health;
    }
    void set_age(int age){
        this->age = age;
    }
    void set_score(int score){
        this->score = score;
    }
    void set_alive(bool alive){
        this->alive = alive;
    }
    int get_health(){
        return health;
    }
    int get_age(){
        return age;
    }
    int get_score(){
        return score;
    }
    bool is_alive(){
        return alive;
    }

};
//checking if we can pass classes
int addScore(Player a, Player b){
    return a.get_score() + b.get_score();
}
//checking if we can return classes
Player getMaxScore(Player a, Player b){
    if (a.get_score()> b.get_score()){
        return a;
    }
    else return b;
}
int main(){
    Player niharika;
    Player vivek;  //static object creation

    Player *gaurav = new Player ; //dynamic object creation
    // Player gauravObject = *gaurav; way-1
    
    niharika.set_health(78);
    niharika.set_age(20);
    niharika.set_score(500);
    niharika.set_alive(true);

    
    vivek.set_health(98);
    vivek.set_age(24);
    vivek.set_score(200);
    vivek.set_alive(false);

    gaurav->set_health(19);
    gaurav->set_age(25); //way 2
    (*gaurav).set_score(800); //way 3

    cout<<"gaurav's health is:"<<gaurav->get_health()<<endl;
    cout<<addScore(niharika, vivek)<<endl;

    // cout<<getMaxScore(niharika, vivek);
    //above won't work, so to make it work:
    Player yuvi = getMaxScore(vivek, niharika);
    cout<<yuvi.get_score()<<endl;
    cout<<yuvi.get_health()<<endl;
}