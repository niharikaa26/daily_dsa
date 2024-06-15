#include<iostream>
using namespace std;
int main(){
  int arr[9] = {0,1,2,3,4,7,8};
  int n=9;
  for(int i=0; i<n; i++){
    if(arr[i] != i){
      cout<<i;
      break;
    }
  }
  

}