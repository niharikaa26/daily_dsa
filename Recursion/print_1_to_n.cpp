#include<iostream>
using namespace std;
void print(int i, int n){
  if(i>n) return;
  cout<<i<<" ";
  print(i+1 , n);
}
int main(){
  print(1,5);
}