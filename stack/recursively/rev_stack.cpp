#include<iostream>
#include<stack>
using namespace std;
void display_rec(stack<int>&st ){
    if (st.size() == 0) return;
    int x = st.top(); 
    st.pop();
    display_rec(st);
    cout<<x<<" ";
    st.push(x);
}
void PushAtBottom(stack<int>&st, int val ){
    if (st.size() == 0) {
        st.push(val);
        return;}
    int x = st.top(); 
    st.pop();
    PushAtBottom(st,val);
    st.push(x);
}
void reverse(stack<int>&st){
    if(st.size() == 1) return;
    int x = st.top();
    st.pop();
    reverse(st);
    PushAtBottom(st,x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display_rec(st);
    reverse(st);
    cout<<endl;
    display_rec(st);

}
