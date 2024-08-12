#include<iostream>
using namespace std;
class Node{  //linked list node
    public:
    int val;
    Node* next;
    Node(int val){
        this-> val = val;
        this -> next = NULL;
    }

};

int main(){
    //10 20 30 40 
    Node a(10);

    Node b(20);

    Node c(30);
    
    Node d(40);
    
    //forming linked list
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    // cout<<a.val<<endl;
    // cout<<&a<<endl;
    // cout<<(*(a.next)).val<<endl;  //way-1
    // cout<<(a.next)->val<<endl;    //way-2
    // cout<<(((a.next)->next)->next)->val<<endl; 
    // cout<<&b<<endl;

    Node temp = a;
    while(true){
        cout<<temp.val<<" ";
        if (temp.next == NULL)  break;
        temp = *(temp.next);
    }
}