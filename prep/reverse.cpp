#include<iostream>
#include<stack>
using namespace std;
string reverse(string str){
    stack <char> st;
    int n = str.size();
    for(int i=0; i<n; i++){
        st.push(str[i]);
    }
    for(int i=0; i<n; i++){
        str[i]= st.top();
        st.pop();
    }
    return str;

}
int main(){
    string str = "aman";
    cout<<reverse(str);

}