#include<iostream>
using namespace std;
int main(){
  int n,temp;
  
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];

  }
  for(int i=1; i<n; i++){
    bool flag = true;
    for(int j=0; j<n-i-1; j++){
      if(arr[j]> arr[j+1]){
        flag = false;
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
      
    }
    if(flag == true){
        break;
      }
  }
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";

  }
}