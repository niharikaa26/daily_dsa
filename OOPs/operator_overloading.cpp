#include<iostream>
using namespace std;
class A{
    public:
    int age;

};
class ComplexNumber{
    public:
    int imaginary;
    int real;

    ComplexNumber operator +(ComplexNumber &c1){
        ComplexNumber c3;
        c3.imaginary = c1.imaginary + this->imaginary;
        c3.real = c1.real + this->real;
        return c3;

    }

};

int main(){

    ComplexNumber a1,a2;
    a1.real = 10;
    a1.imaginary = 20;
    a2.imaginary = 30;
    a2.real = 30;

    ComplexNumber a3 = a1 + a2;
    cout<<"real: "<<a3.real <<" "<<"imaginary: "<<a3.imaginary<<endl;

}
