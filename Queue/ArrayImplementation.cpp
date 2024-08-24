#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    vector<int> arr;
    int front,back,size;
    Queue(int val){
        front = 0;
        back = 0;
        size = 0;
        vector<int> v(val);
        arr = v;
    }
    void push(int val)
{
    if(size>5) cout<<"overflow";
    else {
        arr[back] = val;
        back++;
        size++;
    }
}
void pop(){
    if(size == 0){
        cout<<"empty"<<endl;
    }
    else{
        front++;
        size--;
    }
}
int top(){
    return arr[front];
}
void display(){
    for(int i=front; i<back; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


};
int  main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.size<<endl;
    cout<<q.top()<<endl;
    q.display();
    q.pop();
    q.pop();
    q.display();


}