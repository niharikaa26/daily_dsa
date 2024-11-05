#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int, vector<int>,greater<int>>pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    pq.push(60);
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;

}