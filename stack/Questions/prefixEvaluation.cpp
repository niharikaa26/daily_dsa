#include<iostream>
#include<stack>
using namespace std;
int solve(int val1, int val2, char op){
    if(op == '-') return val1-val2;
    if(op == '+') return val1+val2;
    if(op == '*') return val1*val2;
    if(op == '/') return val1/val2;
    return 0;

}
int main(){
    string s = "-+/*64823";
    stack<int> st;
    for(int i = s.length() - 1; i >= 0; i--){
        if(s[i]>=48 && s[i]<=57){
        st.push(s[i]-'0');
       }  
       else{
        char op = s[i];
        int val1 = st.top();
        st.pop();
        int val2 = st.top();
        st.pop();
        int ans = solve(val1,val2,op); 
        st.push(ans);
       }
    }
    cout<<st.top();
}
    
