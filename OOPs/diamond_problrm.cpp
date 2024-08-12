#include<iostream>
using namespace std;

class A {
    private:
    int a_ka_private;

    public:
    int a_ka_public ;


    protected:
    int a_ka_protected;
    

};
class B : virtual public A{
    private:
    int b_ka_private;

    public:
    int b_ka_public;

    protected:
    int b_ka_protected;
    
};
class C : virtual public A{
    private:
    int c_ka_private;

    public:
    int c_ka_public;

    protected:
    int c_ka_protected;
    

};
class D : public B, public C{
   private:
    int d_ka_private;

    public:
    int d_ka_public;
     void show(){
        cout<<a_ka_public;
    }

    protected:
    int d_ka_protected;

   


};
int main(){

    D d;
    d.a_ka_public = 10;
    d.show();
  
}