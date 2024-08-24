#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> &q){
    int x =0;
    int n= q.size();
     for(int i=0; i<n; i++){
        x = q.front();
        q.pop();
        cout<<x<<" ";
        q.push(x);

    }
    cout<<endl;
}
void removeAtEven(queue<int> &q){
    int x =0;
    int n= q.size();
     for(int i=0; i<n; i++){
        x = q.front();
        q.pop();
        if(i%2!=0){
            q.push(x);
        }
    }
}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    display(q);
    removeAtEven(q);
    display(q);
}