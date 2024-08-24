#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> &q){
    int x =0;
     for(int i=0; i<q.size(); i++){
        x = q.front();
        q.pop();
        cout<<x<<" ";
        q.push(x);

    }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    display(q);
}