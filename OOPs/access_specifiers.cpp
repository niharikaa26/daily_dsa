#include<iostream>
using namespace std;

class A {
    private:
    int a_ka_private;

    public:
    int a_ka_public;

    protected:
    int a_ka_protected;
    

};
class B : protected A{
    public:
    int b_ka_public;

    void show(){

    }

};
int main(){

    B b;
    b.a_ka_public;   
}