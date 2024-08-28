#include<iostream>
#include<stack>
using namespace std;
int priority(char x){
    if(x == '/' ) return 1;
    else if(x == '*' ) return 2;
    else if(x == '-' ) return 3;
    else if(x == '+' ) return 4;
}
int solve(int val1, int val2, char op){
    if(op == '-') return val1-val2;
    if(op == '+') return val1+val2;
    if(op == '*') return val1*val2;
    if(op == '/') return val1/val2;

}
int main(){
    string s = "3+1+5*2/7+2-4-7-6/2";
    stack<int> val;
    stack<char> opr;
    for(int i=0; i<s.length(); i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        } 
        else {
            if(opr.size()==0){
                opr.push(s[i]);

            }
            else if(priority(opr.top()<priority(s[i]))){
                opr.push(s[i]);
            }
            else{
                while(opr.size()!=0 && priority(opr.top())>= priority(s[i])){
                    char op= opr.top();
                    opr.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int Ans = solve(val1, val2, op);
                    val.push(Ans);
                }
                opr.push(s[i]);
            }
        }
    }
    while(opr.size()!= 0){
         char op= opr.top();
         opr.pop();
         int val2 = val.top();
         val.pop();
         int val1 = val.top();
         val.pop();
         int Ans = solve(val1, val2, op);
         val.push(Ans);
    }
    cout<<val.top();
}