#include <iostream>
using namespace std;
class Gun
{
public:
    int damage;
    int ammo;
    int scope;
};
class Player
{
private:
    class Helmet{
        int hp;
        int level;

        public:
        int set_hp(int hp){
            this-> hp = hp;
        }
        int set_level(int level){
            this-> level = level;
        }
        int get_level(){
            return level;
        }
        int get_hp(){
            return hp;
        }

    };
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

    
public:
    void set_health(int health)
    {
        this->health = health;
    }
    void set_age(int age)
    {
        this->age = age;
    }
    void set_score(int score)
    {
        this->score = score;
    }
    void set_alive(bool alive)
    {
        this->alive = alive;
    }
    void set_gun(Gun gun)
    {
        this->gun = gun;
    }

    int get_health()
    {
        return health;
    }
    int get_age()
    {
        return age;
    }
    int get_score()
    {
        return score;
    }
    bool is_alive()
    {
        return alive;
    }
    Gun get_gun()
    {
        return gun;
    }
    void set_helmet(int level){
        Helmet *helmet = new Helmet;
        helmet -> set_level(level);
        int health = 0;
        if(level ==1)
          health = 25;
        else if(level ==2)
          health = 50;
        else if(level == 3)
          health = 100;
        else 
          cout<<"error,invalid level!!";

        helmet-> set_hp(health);
        this-> helmet = *helmet;
    }
    void get_helmet(){
        cout<<helmet.get_hp()<<endl;
        cout<<helmet.get_level()<<endl;

    }
};

int main()
{
    Player niharika;
    Player vivek; 

    //----------------------------------------
    Gun akm;
    akm.ammo= 20;
    akm.damage= 38;
    akm.scope =2;
    //---------------------------------------
    Gun awm;
    awm.ammo =20;
    awm.damage = 98;
    awm.scope = 3;
    //---------------------------------------
    niharika.set_health(78);
    niharika.set_age(20);
    niharika.set_score(500);
    niharika.set_alive(true);
    niharika.set_gun(akm);
    niharika.set_helmet(2);

    //----------------------------------------
    vivek.set_health(98);
    vivek.set_age(24);
    vivek.set_score(200);
    vivek.set_alive(false);
    vivek.set_gun(awm);
    vivek.set_helmet(3);

 
    //----------------------------------------
    Gun gun1 = niharika.get_gun();
    cout<<gun1.damage<<endl;
    cout<<gun1.ammo<<endl;
    cout<<gun1.scope<<endl;
    //---------------------------------------
    Gun gun2 = vivek.get_gun();
    cout<<gun2.damage<<endl;
    cout<<gun2.ammo<<endl;
    cout<<gun2.scope<<endl;

    niharika.get_helmet();
    vivek.get_helmet();

    

}
