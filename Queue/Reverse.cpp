#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int> &q, int z){
    int x =0;
     for(int i=0; i<z; i++){
        x = q.front();
        q.pop();
        cout<<x<<" ";
        q.push(x);

    }
    cout<<endl;
}
void reverse(queue<int> &q, int z){
    stack<int>st;
    int x =0;
     for(int i=0; i<z; i++){
        x = q.front();
        q.pop();
        st.push(x);
    }
     for(int i=0; i<z; i++){
        x = st.top();
        st.pop();
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
    int z = q.size();
    display(q,z);
    reverse(q,z);
    display(q,z);
   
}