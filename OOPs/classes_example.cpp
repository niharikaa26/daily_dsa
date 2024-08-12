#include<iostream>
using namespace std;
class book{
    public:
    string name;
    int price;
    int number_of_pages;
    
    
    int countBooks(int p){
        if (price<p) return 1;
        else return 0;

    }
    bool isBookPresent(string title){
        if(name == title) return true;
        else return false;
    }
};

int main(){
    book hello;
    hello.name = "peace";
    hello.price = 1000;
    hello.number_of_pages = 200;

    cout<<hello.countBooks(1001)<<endl;
    cout<<hello.isBookPresent("peaceful");
}