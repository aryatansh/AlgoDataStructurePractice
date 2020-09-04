#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int d){
            data=d;
            left=NULL;
            right=NULL;
        }
};

Node* build_tree(){
    int a;
    cin>>a;
    if(a==-1){
        return NULL;
    }
    Node* root=  new Node(a);
    root->left=build_tree();
    root->right=build_tree();
    return root;
}
void printTree(Node* treeRoot){
    if(treeRoot==NULL){
        return;
    }
    cout<<treeRoot->data;
    printTree(treeRoot->left);
    printTree(treeRoot->right);
    
}
int main(){
    cout<<endl;
    Node* treeRoot= build_tree();
    printTree(treeRoot);
    return 0;
}