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
class LinkedList{ //user defined data structure
   public:
   Node* head;
   Node* tail;
   int size;

   LinkedList(){
    head = tail = NULL;
    size = 0;
   }

   void insertAtTail(int val){
    Node* temp = new Node(val);
    if(size == 0) head = tail = temp;
    else{
        tail ->next = temp;
        tail = temp;
    }
    size ++;
   }
   void insertAtHead(int val){
    Node* temp = new Node(val);
    if(size == 0) head = tail = temp;
    else{
        temp ->next = head;
        head = temp;
    }
    size ++;
   }
   void deleteAtHead(){
    
    if(size == 0) {
        cout<<"list is empty"<<endl;
    }
    
    
    else if(size>=1){
        head = head -> next;
        size --;
    }
    
   }
   void deleteAtTail(){
    Node* temp = head;
    while(temp -> next!= tail){
        temp = temp ->next;

    }
    temp ->next = NULL;
    tail = temp;
    size --;

   }
   
   void insertAtIdx(int idx, int val){
    if(idx<0 || idx>size){
        cout<<"invalid"<<endl;
    }
    else if(idx == 0){
        insertAtHead(val);
    }
    else if(idx == size){
        insertAtTail(val);
    }
    else{
        Node* t = new Node(val);
        Node* temp = head;
        for(int i=1; i<=idx-1; i++){
            temp = temp-> next;
        }
        t -> next = temp-> next;
        temp-> next = t;
        size++;
    }
}
void deleteAtIdx(int idx){
    if(idx<0 || idx>size){
        cout<<"invalid"<<endl;
        
    }
    else if(idx == 0){
       deleteAtHead();

    }
    else if(idx == size){
        deleteAtTail();
    }
    else{
       
        Node* temp = head;
        for(int i=1; i<=idx-1; i++){
            temp = temp-> next;
        }
        temp -> next = temp-> next ->next;
        size--;
    }
}


void display(){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->val<<" ";
        temp = temp ->next;
    }
    cout<<endl;
   }
};

int main(){
    LinkedList ll;
    ll.insertAtTail(10);
    ll.display();
    ll.insertAtTail(20);
    ll.display();
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
   
   
}