#include<iostream>
using namespace std;
// void display(int arr[], int i, int idx, int max){
//   if(idx==i){
//     cout<<max;
//     return;
//   }
//   if(max<arr[idx]) max = arr[idx];
//   display(arr, i, idx+1, max);
  
// }

int maxInArray(int arr[], int n, int idx){
  if(idx==n) return 0;
  return max(arr[idx], maxInArray(arr,n,idx+1));
}
int main(){
  int arr[8] = {1,2,3,40,5,6,7,8};
  // display(arr, 8, 0, 0);
  cout<<maxInArray(arr, 8, 0);
}