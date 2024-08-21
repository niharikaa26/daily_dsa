#include<iostream>
#include<stack>
using namespace std;
void rev_recursion(stack<int>&st ){
    if (st.size() == 0) return;
    cout<<st.top()<<" ";
    st.pop();
    rev_recursion(st);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    rev_recursion(st);
}
