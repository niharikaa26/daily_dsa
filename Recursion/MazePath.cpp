#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
  if(sr>er || sc>ec) return 0;
  if(sr==er && sc==ec) return 1;
  int rightways = maze(sr,sc+1,er,ec);
  int downways = maze(sr+1, sc,er,ec);
  return rightways +downways;
}
int maze2(int row,int col){
  if(row<1 || col<1) return 0;
  if(row==1 && col==1) return 1;
  int rightways = maze2(row,col-1);
  int downways = maze2(row-1,col);
  return rightways +downways;
}
void PrintPath(int sr, int sc, int er, int ec, string s){
  if(sr>er || sc>ec) return ;
  if(sr==er && sc==ec) {
    cout<<s<<endl;
    return;
  }
  PrintPath(sr,sc+1,er,ec,s+'R');
  PrintPath(sr+1,sc,er,ec,s+'D');
}


int main(){
  // cout<<maze(1,1,3,3);
  // PrintPath(1,1,4,4,"");
  cout<<maze2(3,4);
}