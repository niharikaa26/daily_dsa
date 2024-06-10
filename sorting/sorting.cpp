#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int>v;
  for(int i=0; i<4; i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  for(int i=0; i<4; i++){
    cout<<v[i];
  }

}