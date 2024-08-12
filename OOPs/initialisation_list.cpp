#include<iostream>
using namespace std;

class Bike{
    public:
    
    int tyreSize;
    int engineSize;
   
   Bike(int tS, int eS = 200)  : tyreSize(tS) , engineSize(eS){}
   

};

int main(){
    Bike honda(10, 200);
    Bike passion(15,400);
    
    
}