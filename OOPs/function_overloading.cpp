#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}
void add(int a , double b){
    cout<< a + b<< endl;
}

int main(){
    cout<<add(1,2)<<endl;
    add(1,1.5);
}