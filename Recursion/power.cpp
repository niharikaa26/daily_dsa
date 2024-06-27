#include<iostream>
using namespace std;
int ans =1;
int power(int a, int b){
  if (b == 0) return 1;
  power(a, b-1);
  ans *= a;
  return ans;
}
//orrr
int pow(int a, int b){
  if (b == 0) return 1;
  return a*pow(a,b-1);
}

int main(){
  cout<<power(2,10);
  //orr
  cout<<pow(2,10);
}