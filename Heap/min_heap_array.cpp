#include<iostream>
using namespace std;
class min_heap{
    public:
    int idx;
    int arr[50];

    min_heap(){
        idx = 1;
    }
    int size(){
        return idx-1;
    }
    int top(){
        return arr[1];
    }
    void push(int val){
        arr[idx] = val;
        int i = idx;
        idx ++;
        while(i!=1){
            if(arr[i/2]>arr[i]){
                swap(arr[i/2], arr[i]);
            }
            else{
                break;
            }
            i = i/2;
        }
    }
    void pop(){
        
    }
};

int main(){

}