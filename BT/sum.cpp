#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this-> val = val;
        left = NULL;
        right = NULL;
    }

    

};
int sum(Node * root){
        if(root == NULL) return 0;
        return root->val+sum(root->left)+sum(root->right);
}
int Multiplication(Node * root){
        if(root == NULL) return 1;
        return root->val*Multiplication(root->left)*Multiplication(root->right);
}
int count(Node * root){
        if(root == NULL) return 0;
        return 1+count(root->left)+count(root->right);
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c-> left = f;
    c->right = g;
    cout<<sum(a)<<endl;
    cout<<Multiplication(a)<<endl;
    cout<<count(a);


}