#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>& st){
    stack<int> temp;
    while(st.size()>0){
        // cout<<st.top()<<endl;
        temp.push(st.top());
        st.pop();
    }

    //putting back in st
    while(temp.size()>0){
        st.push(temp.top());
        cout<<st.top()<<" ";
        temp.pop();
    }
}
void PushAtBottom(int val, stack<int>& st){
    stack<int> temp;
    //popping in temp
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    //poppingback in st
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }


}
int main(){
    stack<int> st;
    stack<int> temp;
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    print(st);
    cout<<endl;
    PushAtBottom(70, st);
    print(st);


}