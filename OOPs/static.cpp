#include<iostream>
using namespace std;

class Bike{
    public:
    static int noOfBikes ;
    int tyresize;
    int enginesize;
   
   static void increaseNoOfBikes(){
    noOfBikes++;
   }

};
int Bike::noOfBikes = 10; 
int main(){
    Bike honda;
    Bike passion;
    
    

    honda.increaseNoOfBikes();
    cout<<honda.noOfBikes<<endl;
    cout<<passion.noOfBikes<<endl;

    Bike::increaseNoOfBikes();
    cout<<honda.noOfBikes<<endl;
    cout<<passion.noOfBikes<<endl;

    passion.increaseNoOfBikes();
    cout<<honda.noOfBikes<<endl;
    cout<<passion.noOfBikes<<endl;

}