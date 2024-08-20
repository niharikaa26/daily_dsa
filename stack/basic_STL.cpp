#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    stack<int> temp;
    // cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<st.size()<<endl;
    // st.pop();
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;
    //display stack in reverse order
    // while(st.size()>0){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }

    //getting elements back in stack
    while(st.size()>0){
        // cout<<st.top()<<endl;
        temp.push(st.top());
        st.pop();
    }

    //putting back in st
    while(temp.size()>0){
        st.push(temp.top());
        cout<<st.top()<<endl;
        temp.pop();
    }



}