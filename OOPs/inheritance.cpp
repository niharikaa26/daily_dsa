#include<iostream>
using namespace std;
class vehicle{ //parent class
    public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;
    void showCompany(){
        cout<<companyName<<endl;
    }

    vehicle(){
        cout<<"vehicle ka constructor"<<endl;
    }
};
class Car : public vehicle{ //child class
    public:
    int steeringSize;
};
class Bike : public vehicle{ //child class
    public:
    int handleSize;

    Bike(){
        cout<<"Bike ka constructor"<<endl;
    }
};

int main(){
    Bike honda;
    honda.handleSize = 10;
    honda.tyreSize = 19;
    honda.companyName = "HONDA";
    honda.showCompany();

    
}