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
int main(){
    stack<int> st;
    stack<int> temp;
    stack<int> gt;
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    print(st);
    cout<<st.size()<<endl;

   //popping in temp
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

    //popping in gt
    while(temp.size()>0){
        gt.push(temp.top());
        temp.pop();
    }

    //poppingback in st
    while(gt.size()>0){
        st.push(gt.top());
        gt.pop();
    }

    print(st);


}