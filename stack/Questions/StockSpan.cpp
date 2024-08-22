#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {100,80,60,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int pgi[n];
    //using a stack: pop, ans, push
    // SC = O(n), TC = O(n)
    stack<int> st;
    pgi[0] = -1;
    st.push(0);
    for(int i=1; i<n; i++){
        //pop smaller elements
        while(st.size()>0 && arr[st.top()]<= arr[i]){
            st.pop();
        }
        //mark the ans
        if(st.size()== 0) pgi[i] = -1;   
        else pgi[i] = st.top();
        //push the arr[i]
        st.push(i);
    }
    for(int i=0; i<n; i++){
        cout<<pgi[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<i-pgi[i]<<" ";
    }
    cout<<endl;
}
