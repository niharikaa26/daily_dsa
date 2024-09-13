#include<iostream>
using namespace std; 

class Node{
    public:
    int val; 
    Node* left; 
    Node* right; 
    Node(int val)
    {
        this->val=val ;
        this->left=NULL; 
        this->right=NULL; 
    }
};
int levels(Node* root){
    if(root == NULL) return 0;
    return 1+ max(levels(root->left), levels(root->right));
}
void nthlevel(Node* root,int current,int level)
{
    if(root==NULL)return; 
    if(current==level) cout<<root->val<<" ";
    nthlevel(root->right,current+1,level);
    nthlevel(root->left ,current+1,level);
    
    
}
void LevelOrderTraversal(Node* root, int n){

    for(int i=1; i<=n; i++){
        nthlevel(root,1,i);
    }
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
    a->right=c;

    b->left = d;
    b->right=e;

    c->left = f;
    c->right=g;
     
    int n = levels(a);
    LevelOrderTraversal(a,n);
    
    // nthlevel(a,1,2);
    // nthlevel(a,1,3);

}