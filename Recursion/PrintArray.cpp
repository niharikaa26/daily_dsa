#include<iostream>
using namespace std;
void display(int arr[], int i){
  if(i==0) return;
  display(arr, i-1);
  cout<<arr[i-1]<<" ";
}
int main(){
  int arr[8] = {1,2,3,4,5,6,7,8};
  display(arr, 8);
}