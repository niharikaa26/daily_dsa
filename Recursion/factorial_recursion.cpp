#include<iostream>
using namespace std;
int fact(int n){
  //base case
  if(n==1 || n==0) return 1;
  int factt = n*fact(n-1);
  return factt;
}
int main(){
  cout<<fact(5);
}