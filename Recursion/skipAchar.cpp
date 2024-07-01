#include<iostream>
#include<string>
using namespace std;
void RemoveChar(string ans, string original, int idx){
  if(idx == original.length()){
    cout<<ans;
    return;
  }
  char ch = original[idx];
  if(ch  == 'a') RemoveChar(ans, original, idx+1);
  else RemoveChar(ans+ch , original, idx+1);

}

int main(){
  string str = "niharika sharma";
  RemoveChar("", str,0);
}