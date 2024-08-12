#include<iostream>
using namespace std;

class Bike{
    public:
    int tyresize;
    int enginesize;
    //default constructor:
    // Bike (){
    //     cout<<"constructor called"<<endl;

    // }


    //paramterized constructor:
    Bike (int tyresize, int enginesize){
        this-> tyresize = tyresize;
        this-> enginesize = enginesize;
        cout<<"constructor called"<<endl;

    }


};

int main(){
    cout<<"hello ji!"<<endl;
    Bike tvs(12, 100);  //object created mtlb we called constructor
    Bike honda(13, 200);
    Bike passion(14, 270);
    cout<<tvs.tyresize<< tvs.enginesize<<endl;
    cout<<honda.tyresize<< honda.enginesize<<endl;
}
