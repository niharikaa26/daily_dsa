#include<iostream>
using namespace std;
int main(){
  int arr[5] = {5,3,1,4,2};
  int n =5;
  int min = arr[0];
  int m_ind =0;
  int temp =0;
  for(int i=0; i<n-1; i++){
    for(int j=i; j<n; j++){
      if (arr[j] <min){
        min = arr[j];
        m_ind = j;
      }

    }
    temp = arr[i];
    arr[i] = min;
    min = temp;
    arr[m_ind] = temp;

   
  }
  for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
  }
 
}