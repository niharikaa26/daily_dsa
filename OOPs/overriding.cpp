#include<iostream>
using namespace std;

class A {
    private:
    int a_ka_private;

    protected:
    int a_ka_protected;


    public:
    int a_ka_public;
    void show(){
        cout<<"mai A ka show hun"<<endl;
    }
};
class B : public A{
    private:
    int b_ka_private;

    protected:
    int b_ka_protected;

    public:
    int b_ka_public;

    void show(){
        cout<<"B ka show hu"<<endl;
    }

    
    
};

int main(){

    B b;
    b.show();
    b.A::show();
     
}