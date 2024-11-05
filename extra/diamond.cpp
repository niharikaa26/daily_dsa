#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"A ka constructor call hua"<<endl;
    }
};
class B: public A{
    public: 
    B(){
        cout<<"B ka contructor call hua"<<endl;
    }

};
int main(){
    A a;
    B b;
    B b2;
}