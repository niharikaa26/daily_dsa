#include<iostream>
using namespace std;
int main(){
  int x;
  cin>>x;
  int arr[x];
  for(int i=0; i<x; i++){
    arr[i] = i;
  }
  int lo =0;
  int hi = x;
  bool flag = false;
  while(lo <= hi){
      int mid = lo+(hi -lo)/2;
      if((long long)mid*mid == (long long)x) {
        cout<< mid;
        flag = true;
        break;
      }
      if((long long)mid*mid > (long long)x) hi = mid-1;
      if((long long)mid*mid < (long long)x) lo = mid+1;
  }
  if(flag = false){
    cout<< hi;
  }
      
   
 }
