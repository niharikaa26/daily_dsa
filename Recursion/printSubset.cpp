#include<iostream>
#include<string>
using namespace std;
void PrintSubset(string ans, string original){
  if(original == ""){
    cout<<ans<<endl;
    return;
  }
  char ch = original[0];
  PrintSubset(ans+ch, original.substr(1));
  PrintSubset(ans, original.substr(1));

}


int main(){
  string str = "abc";
  PrintSubset("", str);
}