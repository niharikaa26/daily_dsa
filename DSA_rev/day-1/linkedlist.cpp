#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class Linkedlist{
    public:
    int size =0;
    Node* head;

    Linkedlist(){
        this-> head = NULL;
    }
    
    void InsertAtBeg(int val){
        Node* t= new Node(val);
        if(size == 0){
            head = t; 
        }
        else{
            t->next = head;
            head = t;
        }
        size++;

    }
    void InsertAtEnd(int val){
        Node* t= new Node(val);
        Node*temp = head;
        if(size == 0) head = t;
        else{
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = t;
        }
        size++;

    }
    void InsertAtIdx(int val, int idx){
        if(idx<0 || idx>size) return;
        else if(idx ==0) InsertAtBeg(val);
        else if(idx == size) InsertAtEnd(val);
        else{
            Node* t = new Node(val);
            Node*temp = head;
            for(int i=0; i<idx-1; i++){
                temp= temp->next;
            }
            t->next = temp->next;
            temp->next = t;
        }
        size++;
        

    }
    void DeleteAtBeg(){
        if(size == 0) return;
        else{
            head = head->next;
        }
        size --;
    }
    void DeleteAtEnd(){
        if(size == 0) return;
        else{
            Node* temp = head;
            while(temp->next->next != NULL){
                temp= temp->next;
            }
            temp->next = NULL;
        }
        size --;
    }
    void DeleteAtIdx(int idx){
        if(idx<0 || idx >=size) return;
        else if(idx==0) DeleteAtBeg();
        else if(idx== size -1) DeleteAtEnd();
        else{
            Node* temp = head;
            for(int i= 0; i<idx-1; i++){
                temp = temp->next;
            }
            temp->next= temp->next->next;
        }
        size --;
        
    }
    void get(int idx){
        Node* temp = head;
        for(int i=0; i<idx; i++){
            temp = temp->next;
        }
        cout<<temp->val;
    }
    void Display(){
        Node* temp = head;
        for(int i=0; i<size; i++){
            cout<<temp->val<<"->";
            temp = temp->next;
        }

    }
};

int main(){
    Linkedlist ll;
    ll.InsertAtEnd(10);
    ll.InsertAtEnd(20);
    ll.InsertAtEnd(30);
    ll.InsertAtEnd(40);
    ll.InsertAtIdx(25, 2);
    cout<<ll.size<<endl;
    ll.Display();
    cout<<endl;
    ll.get(3);
    cout<<endl;
    cout<<ll.size<<endl;
    ll.DeleteAtIdx(3);
    cout<<ll.size<<endl;
    ll.Display();
    
}