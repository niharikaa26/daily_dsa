#include<iostream>
using namespace std;
int main(){
  int n,sum;
  sum =0;
  cin>>n;
  for(int i=0; i<=n; i++){
    sum = sum +i;
  }
  cout<<sum<<" ";
  //orrrrrrrrrrr to optimise
  
  cout<<(n*(n+1)/2);
}