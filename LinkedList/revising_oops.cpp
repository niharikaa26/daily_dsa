#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float marks;

    Student(string name, int rno,float marks){
        this -> name = name;
        this -> rno = rno;
        this -> marks = marks;
    }
};
void change(Student &s){
    s.name = "vidushi";
}
int main(){
    Student s("niharika", 98, 89.9);
    cout<<s.name<<endl;
    change(s);
    cout<<s.name<<endl;
    Student* ptr = &s;
    cout<<s.rno<<endl;
    (*ptr).rno = 88;
    cout<<s.rno<<endl;
    
}