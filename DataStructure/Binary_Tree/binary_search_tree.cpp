#include <iostream>

using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node(int d){
            data=d;
            left=NULL;
            right=NULL;
        }
};

node* build_tree(node* root, int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }
    if(data<=root->data){
        build_tree(root->left,data);
    }
    else{
        build_tree(root->right,data);
    }
    return root;
}

void take_input(node* root){
    int data;
    cin>>data;
    while(data!=-1){
        build_tree(root,data);
        cin>>data;
    }
}
int main(){

    return 0;
}