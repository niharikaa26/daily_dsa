#include<iostream>
using namespace std;
int ans = 0;
int sum(int n){
  if (n==0) return 0;
  sum(n-1);
  ans += n;
  return ans;
}
int main(){
  cout<<sum(5);
}