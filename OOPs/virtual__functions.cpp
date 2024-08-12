#include<iostream>
using namespace std;
class Vehicle{ //parent class
    public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;
    void showCompany(){
        cout<<companyName<<endl;
    }
    virtual void show(){
        cout<<"VEHICLE KA SHOW"<<endl;
    }
};
class Car : public Vehicle{ //child class
    public:
    int steeringSize;
};
class Bike : public Vehicle{ //child class
    public:
    int handleSize;

    void show(){
        cout<<"Bike ka show"<<endl;
    }
};

class C: public Bike{
    public:
    void show(){
        Vehicle::show();
        Bike::show();
    }

};

int main(){
    Bike b;
    Vehicle *a;
    a = &b;
    a ->show();

//-------------------------------
    Vehicle *a;
    a = new Bike;
    a-> show();
    a = new Vehicle;
    a->show();

    //virtual hatake try krna
    //shock ho jaaoge
    //kyunki generally compile time binding hoti hai 
    //but virtual mei run time binding hoti hai!


    
}
