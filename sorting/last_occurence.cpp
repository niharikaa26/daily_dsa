#include<iostream>
using namespace std;
int main(){
  int arr[8] = {1,2,3,3,4,4,4,5};
  int n = 8;
  int x = 4;
  int lo = 0;
  int hi = n-1;
  bool flag = false;
  int ans;
  while(lo<=hi){
    int mid = lo +(hi-lo)/2;
    if(arr[mid] ==x){
      if(arr[mid + 1] != x){
        cout<<mid;
        flag = true;
        break;
      }
      else {
        ans = mid;
        lo = mid +1;
      }
    }
    else if(arr[mid]>x){
      hi = mid-1;
    }
    else if(arr[mid] < x){
      lo = mid+1;

    }
  }
  if(flag == false){
    cout<<lo;
  }
}